typedef unsigned char u8;
typedef int s32;

extern "C" int fn_025978cc(void*);
extern "C" int fn_0261d500(void*);

extern "C" u8 fn_0261d56c(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_0261d500(arg0) == 0) && (fn_025978cc(arg0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
