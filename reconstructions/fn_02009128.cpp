typedef int s32;

extern "C" s32 fn_02009128(void *arg0) {
    void* const* vt1;
    s32 var_r31;

    var_r31 = 2;
    if (((s32 (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[349])() != 0) {
        var_r31 = 1;
    }
    return var_r31;
}
