typedef unsigned char u8;
typedef int s32;

extern "C" int fn_024edf80(void*);
extern "C" int fn_02597930(void*);

extern "C" u8 fn_024ee4dc(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_024edf80(arg0) == 0) && (fn_02597930(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
