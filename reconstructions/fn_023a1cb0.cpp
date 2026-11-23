typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02e84e80(int);
extern "C" void fn_02e858cc(int);

extern "C" s32 fn_023a1cb0(void *arg0) {
    u8 *temp_r11;
    u8 *temp_r12;
    u8 var_r3;
    u8 var_r3_2;

    temp_r11 = (*(u8 **)((char *)(arg0) + (0x10)));
    var_r3 = 0;
    if (temp_r11 != 0) {
        var_r3 = *temp_r11;
    }
    fn_02e84e80((s32) var_r3);
    temp_r12 = (*(u8 **)((char *)(arg0) + (0x14)));
    var_r3_2 = 0;
    if (temp_r12 != 0) {
        var_r3_2 = *temp_r12;
    }
    fn_02e858cc((s32) var_r3_2);
    return 1;
}
