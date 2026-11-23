typedef unsigned char u8;
typedef int s32;

extern "C" int fn_030c65f0(void*);

extern "C" u8 fn_030c73b4(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (((s32) (*(s32 *)((char *)(arg0) + (8))) == 0) && (fn_030c65f0(arg0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
