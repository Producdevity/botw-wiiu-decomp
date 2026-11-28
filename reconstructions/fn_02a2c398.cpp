extern "C" void fn_02a2c144(void*);

namespace {
struct Object {
    char padding_0[0x4C];
    unsigned flags_4c;
    char padding_50[0x2D4];
    int value_324;
    int value_328;
};
}

extern "C" int fn_02a2c398(void* self)
{
    Object *object = static_cast<Object *>(self);
    fn_02a2c144(self);
    unsigned flags = object->flags_4c;
    if ((flags >> 8) & 1) {
        return object->value_324;
    }
    int disabled = (flags >> 7) & 1;
    int result = 0;
    if (!disabled) {
        result = object->value_328;
    }
    return result;
}
