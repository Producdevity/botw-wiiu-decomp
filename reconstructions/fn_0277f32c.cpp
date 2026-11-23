typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_0277f020(void *);
extern "C" bool fn_0277f2f0(void *);

extern "C" u8 fn_0277f32c(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_0277f2f0(arg0) == 0) && (fn_0277f020(arg0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
