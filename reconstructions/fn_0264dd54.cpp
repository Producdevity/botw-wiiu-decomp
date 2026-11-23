typedef signed char s8;

extern "C" void fn_026a82ac(void*);
extern "C" void fn_0317be7c(void*);

extern "C" void fn_0264dd54(void *arg0) {
    void *temp_r3;

    fn_026a82ac(arg0);
    temp_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x38C)));
    if (temp_r3 != 0) {
        fn_0317be7c(temp_r3);
    }
    (*(s8 *)((char *)(arg0) + (0x6C))) = 0;
}
