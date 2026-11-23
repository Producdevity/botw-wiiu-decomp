typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03399724(void*);
extern "C" int fn_03399a80(void*);

extern "C" u8 fn_03399b54(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_03399724(arg0) == 0) && (fn_03399a80(arg0) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
