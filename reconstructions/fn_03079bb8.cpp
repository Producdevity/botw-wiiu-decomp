typedef int s32;

extern "C" int fn_02a2d71c(void*);
extern "C" int fn_03079b80(void);
extern "C" char* data_10463798;

extern "C" s32 fn_03079bb8(void) {
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = fn_03079b80();
    var_r3 = 0;
    if (temp_r3 != -1) {
        var_r3 = (fn_02a2d71c(data_10463798) ^ temp_r3) == 0;
    }
    return var_r3;
}
