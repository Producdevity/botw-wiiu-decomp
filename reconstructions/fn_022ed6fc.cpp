typedef int s32;

namespace {
struct VirtualObject {
    char padding_0[0xE8];
    void **vtable;
};
}

extern "C" void fn_020c5b04(void*);
extern "C" void fn_02b3ba3c(void*, void*);
extern "C" void fn_034679dc(void);

extern "C" void fn_022ed6fc(void **object) {
    void *owner = *object;
    if (((s32 (*)(void *))((VirtualObject *)owner)->vtable[91])(owner) != 0) {
        fn_034679dc();
    }
    fn_02b3ba3c((char *)object + 0x44, *object);
    fn_020c5b04(object);
}
