typedef unsigned int u32;

extern "C" void fn_039853b8(void*);
extern "C" void fn_039ab154(void*, void*);

extern "C" void fn_03985468(void *arg0, u32 arg1) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0xB4)));
    if ((temp_r3 != 0) && (arg1 != (u32) temp_r3)) {
        fn_039ab154(temp_r3, arg0);
    }
    (*(void **)((char *)(arg0) + (0xB4))) = (void *) arg1;
    fn_039853b8(arg0);
}
