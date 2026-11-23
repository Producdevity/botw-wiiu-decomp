typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03794838(void*, void*, void*);

extern "C" u8 fn_0223abfc(void *arg0) {
    s32 var_r30;

    var_r30 = 1;
    if ((fn_03794838(arg0, 0, 0) == 0) && !((*(u8 *)((char *)(arg0) + (0xB))) & 1)) {
        var_r30 = 0;
    }
    return var_r30;
}
