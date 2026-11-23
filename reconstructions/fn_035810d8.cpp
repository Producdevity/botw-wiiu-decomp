typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_035810d8(void *arg0) {
    void *temp_r31;

    temp_r31 = (char *)arg0 + 0x22C;
    fn_030bb668(temp_r31);
    (*(s32 *)((char *)(arg0) + (0x268))) = (s32) ((*(s32 *)((char *)(arg0) + (0x268))) + 1);
    fn_030bb69c(temp_r31);
}
