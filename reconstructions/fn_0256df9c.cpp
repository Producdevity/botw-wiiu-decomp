typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e17694(void*);
extern "C" int fn_02e176a4(void*);

extern "C" u8 fn_0256df9c(void) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r0;

    temp_r31 = fn_02e17694(0);
    temp_r3 = fn_02e176a4(0);
    var_r0 = 0;
    if ((temp_r31 != 0) && (temp_r3 == 0)) {
        var_r0 = 1;
    }
    return var_r0;
}
