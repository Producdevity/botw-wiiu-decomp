typedef int s32;
typedef unsigned int u32;

extern "C" s32 fn_02d33c5c(void *arg0) {
    void* const* vt1;
    void *temp_r12;

    if (((u32) (*(u32 *)((char *)(arg0) + (0x8E0))) >> 0x17U) & 1) {
        temp_r12 = (*(void **)((char *)(((void * (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[529])()) + (0x6C)));
        if (temp_r12 != 0) {
            return (*(s32 *)((char *)(temp_r12) + (0x5C))) & 1;
        }
    }
    return 0;
}
