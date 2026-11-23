typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0276a7b4(void*);
extern "C" int fn_0276ad94(void*);

extern "C" u8 fn_0276af10(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_0276a7b4(arg0) != 0) && (fn_0276ad94(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
