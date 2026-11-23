typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0253e718(void*);

extern "C" u8 fn_028e5804(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) (*(u8 *)((char *)(arg0) + (0xB0))) != 0) && (fn_0253e718(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
