typedef signed char s8;

extern "C" void fn_03b9a020(void*, void*);
extern "C" void fn_03ba745c(void*);

extern "C" void fn_03b9aefc(void *arg0) {
    void *temp_r3;

    fn_03b9a020((*(void **)((char *)(arg0) + (4))), arg0);
    temp_r3 = (*(void **)((char *)(arg0) + (0x88)));
    if (temp_r3 != 0) {
        fn_03ba745c(temp_r3);
    }
    (*(s8 *)((char *)(arg0) + (0x40))) = 1;
}
