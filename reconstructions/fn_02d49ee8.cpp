typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_02d49ee8(void *arg0) {
    void *temp_r30;
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(arg0) + (0x30)));
    if (temp_r31 != 0) {
        temp_r30 = (char *)temp_r31 + 0x858;
        fn_030bb668(temp_r30);
        (*(s32 *)((char *)(temp_r31) + (0x894))) = (s32) ((*(s32 *)((char *)(temp_r31) + (0x894))) | 0x100);
        fn_030bb69c(temp_r30);
    }
}
