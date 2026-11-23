typedef signed char s8;

extern "C" void fn_026dc1ec(void*);
extern "C" void fn_02b3f3b8(void*, void*);
extern "C" void fn_02b3f858(void*);
extern "C" void fn_0317be7c(void*);

extern "C" void fn_0255a6ec(void *arg0) {
    void *temp_r3;

    fn_02b3f858((char *)arg0 + 0x74);
    fn_02b3f3b8((char *)arg0 + 0x74, 0);
    (*(s8 *)((char *)(arg0) + (0x7D))) = 1;
    temp_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x38C)));
    if (temp_r3 != 0) {
        fn_0317be7c(temp_r3);
    }
    fn_026dc1ec(arg0);
}
