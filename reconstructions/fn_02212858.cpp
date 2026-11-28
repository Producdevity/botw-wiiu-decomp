typedef int s32;

namespace {
struct VirtualObject {
    char padding_0[0xE8];
    void **vtable;
};
}

extern "C" void fn_0221214c(void*);
extern "C" void fn_032ff5a8(void*, void*);

extern "C" void fn_02212858(void **object) {
    fn_0221214c(object);
    void *owner = *object;
    s32 target = ((s32 (*)(void *))((VirtualObject *)owner)->vtable[265])(owner);
    if (target != 0) {
        fn_032ff5a8((void *)(target + 8), (char *)object + 0x24);
    }
}
