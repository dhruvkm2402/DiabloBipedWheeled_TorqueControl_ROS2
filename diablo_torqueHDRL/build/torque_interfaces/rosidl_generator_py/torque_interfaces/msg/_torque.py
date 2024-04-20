# generated from rosidl_generator_py/resource/_idl.py.em
# with input from torque_interfaces:msg/Torque.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Torque(type):
    """Metaclass of message 'Torque'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('torque_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'torque_interfaces.msg.Torque')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__torque
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__torque
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__torque
            cls._TYPE_SUPPORT = module.type_support_msg__msg__torque
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__torque

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Torque(metaclass=Metaclass_Torque):
    """Message class 'Torque'."""

    __slots__ = [
        '_t_hr',
        '_t_kr',
        '_t_wr',
        '_t_hl',
        '_t_kl',
        '_t_wl',
    ]

    _fields_and_field_types = {
        't_hr': 'float',
        't_kr': 'float',
        't_wr': 'float',
        't_hl': 'float',
        't_kl': 'float',
        't_wl': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.t_hr = kwargs.get('t_hr', float())
        self.t_kr = kwargs.get('t_kr', float())
        self.t_wr = kwargs.get('t_wr', float())
        self.t_hl = kwargs.get('t_hl', float())
        self.t_kl = kwargs.get('t_kl', float())
        self.t_wl = kwargs.get('t_wl', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.t_hr != other.t_hr:
            return False
        if self.t_kr != other.t_kr:
            return False
        if self.t_wr != other.t_wr:
            return False
        if self.t_hl != other.t_hl:
            return False
        if self.t_kl != other.t_kl:
            return False
        if self.t_wl != other.t_wl:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def t_hr(self):
        """Message field 't_hr'."""
        return self._t_hr

    @t_hr.setter
    def t_hr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_hr' field must be of type 'float'"
        self._t_hr = value

    @property
    def t_kr(self):
        """Message field 't_kr'."""
        return self._t_kr

    @t_kr.setter
    def t_kr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_kr' field must be of type 'float'"
        self._t_kr = value

    @property
    def t_wr(self):
        """Message field 't_wr'."""
        return self._t_wr

    @t_wr.setter
    def t_wr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_wr' field must be of type 'float'"
        self._t_wr = value

    @property
    def t_hl(self):
        """Message field 't_hl'."""
        return self._t_hl

    @t_hl.setter
    def t_hl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_hl' field must be of type 'float'"
        self._t_hl = value

    @property
    def t_kl(self):
        """Message field 't_kl'."""
        return self._t_kl

    @t_kl.setter
    def t_kl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_kl' field must be of type 'float'"
        self._t_kl = value

    @property
    def t_wl(self):
        """Message field 't_wl'."""
        return self._t_wl

    @t_wl.setter
    def t_wl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_wl' field must be of type 'float'"
        self._t_wl = value
