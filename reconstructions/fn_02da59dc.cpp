typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e18dd4(void*);
extern "C" int fn_02e18e14(void*);

extern "C" u8 fn_02da59dc(void) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_02e18dd4(0) != 0) && (fn_02e18e14(0) == 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
