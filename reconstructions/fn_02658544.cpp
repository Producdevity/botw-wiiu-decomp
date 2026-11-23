typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

extern "C" s32 fn_02658544(void *arg0, void **arg1) {
    void* const* vt1;
    void* const* vt2;
    if ((u32) *((u32 * (*)(void **))(vt1 = *(void* const**)&(*arg1))[9])(arg1) == 0x03000015U) {
        (*(s8 *)((char *)(arg0) + (0x20))) = 0;
    } else if ((u32) *((u32 * (*)(void **))(vt2 = *(void* const**)&(*arg1))[9])(arg1) == 0x03000016U) {
        (*(s8 *)((char *)(arg0) + (0x20))) = 1;
    }
    return 0;
}
