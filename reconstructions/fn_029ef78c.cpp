typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_029ef78c(void *arg0) {
    void *temp_r31;

    temp_r31 = (char *)arg0 + 0x58;
    fn_030bb668(temp_r31);
    if ((s32) (*(s32 *)((char *)(arg0) + (0))) != 0) {
        (*(s32 *)((char *)(arg0) + (0x94))) = 5;
    }
    fn_030bb69c(temp_r31);
}
