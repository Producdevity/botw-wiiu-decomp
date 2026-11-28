extern "C" void fn_020ebafc(void *, void *);

namespace {
struct Object {
    char padding_0[0x50];
    signed char flag_50;
    char padding_51[3];
    void *const *vtable_54;
};
}

extern "C" void fn_021dc8ec(void *object, void *argument)
{
    void *const *vtable;
    fn_020ebafc(object, argument);
    ((Object *)object)->flag_50 = 0;
    ((int (*)(void *, void *))(vtable = ((Object *)object)->vtable_54)[17])((char *)object + 0x4c, argument);
}
