typedef int s32;

extern "C" int fn_0434b1e0(void*);
extern "C" int fn_0434b258(int);

extern "C" s32 fn_02c20280(s32 arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((arg0 != 0) && (fn_0434b258(arg0) != 1)) {
        var_r31 = fn_0434b1e0((void *) arg0);
    }
    return var_r31;
}
