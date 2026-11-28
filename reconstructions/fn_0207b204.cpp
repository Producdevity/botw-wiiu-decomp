extern "C" void fn_020ebafc(void *, void *);

namespace {
struct Object {
    char padding_0[0x74];
    signed char flag_74;
    char padding_75[3];
    void *const *vtable_78;
};
}

extern "C" void fn_0207b204(void *object, void *argument)
{
    void *const *vtable;
    fn_020ebafc(object, argument);
    ((Object *)object)->flag_74 = 0;
    ((int (*)(void *, void *))(vtable = ((Object *)object)->vtable_78)[17])((char *)object + 0x70, argument);
}
