typedef unsigned char u8;
typedef int s32;

extern "C" int fn_022cc4a0(void*, void*);
extern "C" int fn_03191c58(void*);

extern "C" u8 fn_022ccad0(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_03191c58((char *)arg0 + 0x58) != 0) && (fn_022cc4a0(arg0, (char *)arg0 + 0x58) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
