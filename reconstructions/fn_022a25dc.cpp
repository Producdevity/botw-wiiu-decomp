typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02c1b38c(void*, void*);

extern "C" u8 fn_022a25dc(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) *(*(u8 **)((char *)(arg0) + (0x20))) != 0) && (fn_02c1b38c((*(void **)((char *)(arg0) + (0))), 0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
