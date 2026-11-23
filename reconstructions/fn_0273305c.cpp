extern "C" void fn_03177734(void*, void*);

extern "C" void fn_0273305c(void **arg0) {
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(*arg0) + (0x388)));
    if (temp_r31 != 0) {
        fn_03177734(temp_r31, (char *)arg0 + 0x84);
        fn_03177734(temp_r31, (char *)arg0 + 0x10C);
    }
}
