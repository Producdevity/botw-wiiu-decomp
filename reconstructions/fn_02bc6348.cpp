typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02c10774(int);

extern "C" void fn_02bc6348(void *arg0) {
    s32 temp_r31;
    s32 var_r3;

    temp_r31 = *(*(s32 **)((char *)(arg0) + (0x28)));
    var_r3 = fn_02c10774(temp_r31);
    if (var_r3 != 0) {
        var_r3 = (s32) (u8) temp_r31;
    }
    (*(s8 *)((char *)(arg0) + (0x2C))) = (s8) var_r3;
}
