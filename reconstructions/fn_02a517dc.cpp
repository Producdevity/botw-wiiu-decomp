typedef int s32;

extern "C" s32 fn_02a517dc(void *arg0) {
    void* const* vt1;
    s32 var_r31;

    var_r31 = 0;
    if (((s32 (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[27])() != 0) {
        var_r31 = 1;
    }
    return var_r31;
}
