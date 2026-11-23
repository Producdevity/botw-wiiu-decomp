typedef int s32;

extern "C" int fn_03b84908(void*);
extern "C" int fn_03b84bbc(void);

extern "C" s32 fn_03b84bec(void) {
    s32 var_r31;

    var_r31 = fn_03b84bbc();
    if ((var_r31 == 0) || (fn_03b84908((void *) var_r31) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
