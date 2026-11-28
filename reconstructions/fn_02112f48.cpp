typedef int s32;
typedef unsigned int u32;

extern "C" void fn_02b140d4(void *, void *);
extern "C" void fn_02b14274(void*, int);

extern "C" s32 fn_02112f48(s32 object, void **context) {
    void* const* vt1;
    void* const* vt2;
    if ((u32) *((u32 * (*)(void **))(vt1 = *(void* const**)&(*context))[9])(context) == 0x03000003U) {
        fn_02b14274((void *)(object + 0x54), 1);
        return 0;
    }
    if ((u32) *((u32 * (*)(void **))(vt2 = *(void* const**)&(*context))[9])(context) == 0x03000004U) {
        fn_02b140d4((void *)(object + 0x54), (void *)1);
    }
    return 0;
}
