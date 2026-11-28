extern "C" void fn_023fe62c(void *);
extern "C" void fn_03793fcc(void *);

namespace {
struct Object {
    char padding_0[0xC];
    void *const *vtable_c;
};
}

extern "C" void fn_02309b14(void *object)
{
    fn_03793fcc((char *)object + 0x2C);
    ((int (*)(void *))((Object *)object)->vtable_c[67])(object);
    fn_023fe62c(object);
}
