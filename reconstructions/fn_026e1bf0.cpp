typedef int s32;

extern "C" void fn_025c6c00(void *);
extern "C" void fn_0294f828(void*, void*);
extern "C" void fn_034cc350(int);

extern "C" void fn_026e1bf0(void *arg0) {
    s32 temp_r3;

    temp_r3 = (*(s32 *)((char *)(arg0) + (0x308)));
    if (temp_r3 != 0) {
        fn_034cc350(temp_r3);
        (*(s32 *)((char *)(arg0) + (0x308))) = 0;
    }
    fn_0294f828((*(void **)((char *)(arg0) + (0))), (char *)arg0 + 0x30C);
    fn_025c6c00(arg0);
}
