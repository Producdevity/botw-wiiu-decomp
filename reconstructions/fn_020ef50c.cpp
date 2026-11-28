extern "C" void fn_020ef3b4(void *);
extern "C" void fn_020f0054(void *);

namespace {
struct Object {
    char padding_0[0x50];
    void *const *vtable_50;
};
}

extern "C" void fn_020ef50c(void *object)
{
    fn_020f0054(object);
    fn_020ef3b4(object);
    ((int (*)(void *))((Object *)object)->vtable_50[19])((char *)object + 0x48);
}
