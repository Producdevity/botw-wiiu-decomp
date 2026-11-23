typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0307cb54(void);

extern "C" u8 fn_02e3b23c(void) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_0307cb54() != 7) && (fn_0307cb54() != 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
