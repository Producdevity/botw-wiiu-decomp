typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" int fn_03078c14(void);
extern "C" float fn_03078c9c(void);

extern "C" f32 data_1025a66c;

extern "C" u8 fn_03056820(void) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_03078c14() != 0) && (fn_03078c9c() != data_1025a66c)) {
        var_r31 = 1;
    }
    return var_r31;
}
