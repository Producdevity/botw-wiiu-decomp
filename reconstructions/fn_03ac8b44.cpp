extern "C" void fn_03ac5958(void*, void*);
extern "C" void fn_03ac5978(void*);

extern "C" void fn_03ac8b44(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x360)));
    if (temp_r4 != 0) {
        fn_03ac5958((char *)arg0 + 0x684, temp_r4);
        (*(void **)((char *)(arg0) + (0x360))) = 0;
    }
    fn_03ac5978((char *)arg0 + 0x684);
}
