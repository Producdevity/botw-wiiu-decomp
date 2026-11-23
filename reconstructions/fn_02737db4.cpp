extern "C" void fn_02736044(void*);
extern "C" void fn_027360a4(void*);
extern "C" void fn_03458474(void*);

extern "C" void fn_02737db4(void *arg0) {
    void *temp_r3;

    fn_027360a4(arg0);
    fn_02736044(arg0);
    temp_r3 = (*(void **)((char *)(arg0) + (0x1F8)));
    if (temp_r3 != 0) {
        fn_03458474(temp_r3);
    }
}
