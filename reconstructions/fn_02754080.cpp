typedef int s32;
typedef unsigned int u32;

extern "C" void fn_02753294(void*);
extern "C" void fn_02753db4(void*);

extern "C" s32 fn_02754080(void *arg0, void **arg1) {
    void* const* vt1;
    void* const* vt2;
    if ((u32) *((u32 * (*)(void **))(vt1 = *(void* const**)&(*arg1))[9])(arg1) == 0x03000003U) {
        fn_02753db4(arg0);
        return 0;
    }
    if ((u32) *((u32 * (*)(void **))(vt2 = *(void* const**)&(*arg1))[9])(arg1) == 0x03000004U) {
        fn_02753294(arg0);
    }
    return 0;
}
