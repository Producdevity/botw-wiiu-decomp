typedef int s32;

extern "C" int fn_02e192f4(void*);
extern "C" int fn_02e19344(void*);
extern "C" int fn_02e19354(void*);
extern "C" int fn_02e19384(void*);
extern "C" int fn_02e193c4(void*);

extern "C" s32 fn_0307b5b0(void) {
    s32 var_r31;

    var_r31 = 0;
    if (fn_02e19354(0) != 0) {
        var_r31 = 1;
    }
    if (fn_02e193c4(0) != 0) {
        var_r31 += 1;
    }
    if (fn_02e19344(0) != 0) {
        var_r31 += 1;
    }
    if (fn_02e192f4(0) != 0) {
        var_r31 += 1;
    }
    if (fn_02e19384(0) != 0) {
        var_r31 += 2;
    }
    return var_r31;
}
