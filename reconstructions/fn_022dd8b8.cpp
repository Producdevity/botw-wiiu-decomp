namespace {
struct Object {
    char padding_0[0xAC];
    int value_ac;
};
}

extern "C" int fn_022d2fcc(void);
extern "C" int fn_022dd8b8(void* self)
{
    Object *object = (Object *)self;
    if (fn_022d2fcc() == 0) {
        return 0;
    }
    object->value_ac = 0;
    return 1;
}
