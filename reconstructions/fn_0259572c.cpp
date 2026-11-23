typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0294ee18(void*);
extern "C" int fn_02b67054(void *, int);

extern "C" u8 fn_0259572c(void **arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_02b67054(*arg0, 1) == 0) && (fn_0294ee18(*arg0) != 4)) {
        var_r31 = 1;
    }
    return var_r31;
}
