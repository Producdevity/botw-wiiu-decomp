typedef unsigned char u8;
typedef int s32;

extern "C" u8 fn_0246c5a0(void *arg0) {
    void* const* vt1;
    s32 var_r31;

    var_r31 = 1;
    if (!((*(u8 *)((char *)(arg0) + (0xB))) & 1) && (((s32 (*)())(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[73])() == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
