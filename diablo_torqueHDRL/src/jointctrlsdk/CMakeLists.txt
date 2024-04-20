cmake_minimum_required(VERSION 3.5)
project(jointctrlsdk)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_definitions(-D_LOG_CONSOLE)
# find dependencies
find_package(rclcpp REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(torque_interfaces REQUIRED)

include_directories(include)

set(library_name ${PROJECT_NAME}_core)

set(dependencies
  rclcpp
  std_msgs
  torque_interfaces
)


add_library(${library_name} SHARED
    src/crc_verify.cpp
    src/serial_handle.cpp
    src/SerialPort/SerialPort.cpp
)

set(executable_name diablo_torquesubscriber)
add_executable(${executable_name} src/diablo_torque.cpp)
ament_target_dependencies(${executable_name}
  rclcpp
  std_msgs
  torque_interfaces
)
add_executable(torque_msg_subscribe src/torque_subscribe_test.cpp)
ament_target_dependencies(torque_msg_subscribe
  rclcpp
  std_msgs
  torque_interfaces
)

target_link_libraries(${executable_name} ${library_name})
target_link_libraries(${executable_name} -lpthread -lm)



if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
  find_package(ament_cmake_gtest REQUIRED)
endif()


ament_target_dependencies(${library_name}
  rclcpp
  std_msgs
  torque_interfaces
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
  find_package(ament_cmake_gtest REQUIRED)
endif()

install(DIRECTORY include/
  DESTINATION include/
)

install(TARGETS ${library_name}
  DESTINATION lib)

install(TARGETS ${executable_name}
  torque_msg_subscribe
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

install(TARGETS
  ${library_name}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

ament_export_include_directories(include)
ament_export_libraries(${library_name})
ament_export_dependencies(${dependencies})

ament_package()
