typedef signed char s8;
typedef int s32;

extern "C" int fn_030d730c(void*);
extern "C" void fn_030d733c(int, int);

extern "C" void fn_030d7ed8(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_030d730c(arg0);
    fn_030d733c((s32) arg0, temp_r3);
    (*(s8 *)((char *)(arg0) + (0x79))) = (s8) temp_r3;
}
