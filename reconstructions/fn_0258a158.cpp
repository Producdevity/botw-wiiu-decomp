namespace {
struct Object {
    char padding_0[0x28];
    char *flag_28;
};
}

extern "C" int fn_0258a510(void);
extern "C" int fn_0258a158(void* self)
{
    Object *object = (Object *)self;
    if (fn_0258a510() == 0) {
        return 0;
    }
    *object->flag_28 = 0;
    return 1;
}
