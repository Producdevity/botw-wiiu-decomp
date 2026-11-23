typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e199d4(void*);
extern "C" int fn_02e199e4(void*);
extern "C" int fn_02e199f4(void*);

extern "C" u8 fn_02e1c0e4(void) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_02e199d4(0) == 0) && (fn_02e199e4(0) == 0) && (fn_02e199f4(0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
