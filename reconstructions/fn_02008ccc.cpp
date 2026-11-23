typedef unsigned char u8;
typedef int s32;

extern "C" int fn_033bdad4(void*);
extern "C" int fn_03799e00(void*);

extern "C" u8 fn_02008ccc(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_03799e00(arg0) == 0) && (fn_033bdad4((char *)arg0 + 0x7CC) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
