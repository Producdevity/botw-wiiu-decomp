typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_03797790(const void *, int);

extern "C" u8 fn_037ad7bc(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_03797790(arg0, 0xA) == 0) && ((s32) (*(s32 *)((char *)(arg0) + (0x43C))) != 2)) {
        var_r31 = 0;
    }
    return var_r31;
}
