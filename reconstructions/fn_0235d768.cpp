typedef int s32;

extern "C" int fn_024693d4(void*);
extern "C" int fn_02c19940(void *);

extern "C" s32 fn_0235d768(void **arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (fn_024693d4(arg0) == 0) {
        var_r31 = fn_02c19940(*arg0);
    }
    return var_r31;
}
