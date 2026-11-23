typedef int s32;

extern "C" void fn_034c08f0(void*);
extern "C" void fn_037afa78(void*, int, int);

extern "C" void fn_02357d60(void **arg0) {
    void *temp_r31;
    void *temp_r3;

    temp_r31 = *arg0;
    temp_r3 = (*(void **)((char *)(temp_r31) + (0x3A0)));
    if (temp_r3 != 0) {
        fn_034c08f0(temp_r3);
    }
    fn_037afa78(temp_r31, 2, 1);
    (*(s32 *)((char *)(temp_r31) + (0x364))) = (s32) ((*(s32 *)((char *)(temp_r31) + (0x364))) | 0x10);
}
