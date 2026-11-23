typedef unsigned char u8;
typedef int s32;

extern "C" u8 fn_02c1b300(void *arg0) {
    void* const* vt1;
    s32 var_r31;

    var_r31 = 0;
    if ((arg0 != 0) && (((s32 (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[253])() != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
