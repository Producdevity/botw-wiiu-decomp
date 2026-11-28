typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0339a0c4(void *);

extern "C" s32 fn_0224e5fc(void **handle, void **message) {
    void *const *vtable;
    if ((u32) *((u32 *(*)(void **))(vtable = *(void *const **)message)[9])(message) == 0x03000003U) {
        fn_0339a0c4(*handle);
    }
    return 0;
}
