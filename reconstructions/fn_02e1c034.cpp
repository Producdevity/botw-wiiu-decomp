typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e1a98c(void*);
extern "C" int fn_02e1a99c(void*);

extern "C" u8 fn_02e1c034(void) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_02e1a98c(0) == 0) && (fn_02e1a99c(0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
