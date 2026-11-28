extern "C" void fn_02344914(void *, void *);

namespace {
struct Object {
    char padding_0[0x28];
    signed char flag_28;
    char padding_29[3];
    void *const *vtable_2c;
};
}

extern "C" void fn_022a1f04(void *object, void *argument)
{
    void *const *vtable;
    fn_02344914(object, argument);
    ((Object *)object)->flag_28 = 0;
    ((int (*)(void *, void *))(vtable = ((Object *)object)->vtable_2c)[17])((char *)object + 0x24, argument);
}
