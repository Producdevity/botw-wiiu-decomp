extern "C" void fn_0238a0d4(void*);
extern "C" void fn_0378a24c(void*, void*);
extern "C" void fn_03796ed8(void*);

namespace {
struct Target {
    char padding_0[0x54];
    unsigned char state;
    char padding_55[0xF];
    int flags;
};
}

extern "C" void fn_0238a14c(void** object)
{
    void* target = *object;
    if ((((Target *) target)->state != 3 && !(((Target *) target)->flags & 1)) != 0U) {
        fn_0238a0d4(object);
        fn_03796ed8(target);
        fn_0378a24c(target, 0);
    }
}
