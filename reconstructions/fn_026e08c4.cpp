extern "C" void fn_0317f700(void*, int);

extern "C" void fn_026e08c4(void **arg0) {
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(*arg0) + (0x38C)));
    if (temp_r31 != 0) {
        fn_0317f700(temp_r31, 1);
        fn_0317f700(temp_r31, 0);
    }
}
