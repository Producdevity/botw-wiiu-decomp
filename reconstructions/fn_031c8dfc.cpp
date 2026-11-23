typedef int s32;

extern "C" void fn_031c438c(void*);
extern "C" void fn_0388bb4c(int);

extern "C" void fn_031c8dfc(void *arg0) {
    s32 temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(s32 *)((char *)(arg0) + (0x174A8)));
    if (temp_r3 != 0) {
        fn_0388bb4c(temp_r3);
    }
    temp_r3_2 = (*(void **)((char *)(((char *)arg0 + 0x10000 + 0x74A8)) + (8)));
    if (temp_r3_2 != 0) {
        fn_031c438c(temp_r3_2);
    }
}
