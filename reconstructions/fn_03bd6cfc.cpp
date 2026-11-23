typedef signed char s8;
typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_03bd6cfc(void *arg0, s8 *arg1) {
    void *temp_r31;

    if (((s32) (*(s32 *)((char *)(arg0) + (8))) != 0) && (arg1 != 0)) {
        temp_r31 = (char *)arg0 + 0x10;
        fn_030bb668(temp_r31);
        *arg1 = 0;
        fn_030bb69c(temp_r31);
    }
}
