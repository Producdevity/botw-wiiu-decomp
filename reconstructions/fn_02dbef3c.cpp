typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02c34550(void);
extern "C" int fn_02dbeeb0(void*);

extern "C" u8 fn_02dbef3c(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_02dbeeb0(arg0) != 0) && ((s32) (*(s32 *)((char *)(arg0) + (0x14))) == 0) && (fn_02c34550() == 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
