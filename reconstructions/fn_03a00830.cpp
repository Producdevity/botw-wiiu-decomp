typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" s32 fn_03a00830(void *arg0, s32 arg1) {
    s32 temp_r31;
    void *temp_r29;

    temp_r29 = (char *)arg0 + 0x54;
    fn_030bb668(temp_r29);
    if ((arg1 >= (s32) (*(s32 *)((char *)(arg0) + (4)))) || (arg1 < 0)) {
        fn_030bb69c(temp_r29);
        return 0;
    }
    temp_r31 = (*(s32 *)((char *)(arg0) + (0x14))) + (arg1 * 0xA8);
    fn_030bb69c(temp_r29);
    return temp_r31;
}
