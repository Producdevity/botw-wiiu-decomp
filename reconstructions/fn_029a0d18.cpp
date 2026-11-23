typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02b83f20(void*, void*);

extern "C" u8 fn_029a0d18(void *arg0, void *arg1) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) *(*(s32 **)((char *)(arg0) + (0x40))) != 4) && (fn_02b83f20(arg0, arg1) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
