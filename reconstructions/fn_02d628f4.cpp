typedef int s32;

extern "C" int fn_02d33cbc(void);
extern "C" int fn_02e17544(void*);

extern "C" s32 fn_02d628f4(void) {
    s32 var_r31;

    var_r31 = 0;
    if (fn_02d33cbc() == 0) {
        var_r31 = fn_02e17544(0);
    }
    return var_r31;
}
