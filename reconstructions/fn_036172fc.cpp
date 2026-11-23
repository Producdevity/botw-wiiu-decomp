typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03617164(void);
extern "C" int fn_03617230(void);

extern "C" u8 fn_036172fc(void) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_03617164() == 0) && (fn_03617230() == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
