typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0339a0c4(void *);

extern "C" s32 fn_0224e5fc(void **arg0, void **arg1) {
    void* const* vt1;
    if ((u32) *((u32 * (*)(void **))(vt1 = *(void* const**)&(*arg1))[9])(arg1) == 0x03000003U) {
        fn_0339a0c4(*arg0);
    }
    return 0;
}
