typedef int s32;
typedef unsigned int u32;

extern "C" s32 fn_0268ad74(void *arg0, void **arg1) {
    void* const* vt1;
    if ((u32) *((u32 * (*)(void **))(vt1 = *(void* const**)&(*arg1))[9])(arg1) == 0x08000043U) {
        (*(s32 *)((char *)(arg0) + (0x74))) = (s32) ((*(s32 *)((char *)(arg0) + (0x74))) + 1);
    }
    return 0;
}
