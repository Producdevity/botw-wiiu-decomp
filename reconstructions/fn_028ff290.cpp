typedef int s32;
typedef unsigned int u32;

extern "C" void fn_028fed24(void*, void*);

extern "C" s32 fn_028ff290(void *arg0, void **arg1) {
    void* const* vt1;
    if ((u32) *((u32 * (*)(void **))(vt1 = *(void* const**)&(*arg1))[9])(arg1) == 0x03000003U) {
        fn_028fed24(arg0, 0);
    }
    return 0;
}
