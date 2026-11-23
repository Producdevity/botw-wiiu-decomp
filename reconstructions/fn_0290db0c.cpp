typedef int s32;

struct Base;
struct Owner;
extern "C" void* fn_02b62bc8(void*);

extern "C" s32 fn_0290db0c(struct Owner **arg0) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = fn_02b62bc8(*arg0);
    if ((temp_r3 != 0) && (((s32 (*)())(vt1 = *(void* const**)((char *)(temp_r3) + (0x1C)))[17])() != -1)) {
        return 1;
    }
    return 0;
}
