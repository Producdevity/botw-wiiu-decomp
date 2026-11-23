typedef int s32;

extern "C" int fn_0324d56c(void *);
extern "C" int fn_0324d61c(void*, void*);

extern "C" s32 fn_03249c64(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (fn_0324d56c(arg0) != 0) {
        var_r31 = fn_0324d61c(arg0, (char *)arg0 + 0x14);
    }
    return var_r31;
}
