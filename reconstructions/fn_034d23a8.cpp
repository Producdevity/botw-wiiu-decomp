typedef int s32;
typedef unsigned int u32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" int fn_034d5b0c(int);

extern "C" s32 fn_034d23a8(void *arg0) {
    s32 var_r28;
    s32 var_r29;
    s32 var_r3;
    u32 var_r30;
    void *temp_r31;

    temp_r31 = (char *)arg0 + 0xAC;
    fn_030bb668(temp_r31);
    var_r28 = (*(s32 *)((char *)(arg0) + (0x40)));
    var_r30 = 0U;
    if (var_r28 > 0) {
        var_r29 = 0;
loop_2:
        var_r3 = (*(s32 *)((char *)(arg0) + (0x44)));
        if (var_r30 < (u32) (*(s32 *)((char *)(arg0) + (0x40)))) {
            var_r3 += var_r29;
        }
        if (fn_034d5b0c(var_r3) != 0) {
            fn_030bb69c(temp_r31);
            return 1;
        }
        var_r28 -= 1;
        var_r30 += 1;
        var_r29 += 0xC0;
        if (var_r28 != 0) {
            goto loop_2;
        }
        
        fn_030bb69c(temp_r31);
        return 0;
    }
    fn_030bb69c(temp_r31);
    return 0;
}
