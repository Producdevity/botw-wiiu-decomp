extern "C" void fn_0357fecc(void*, void*);

extern "C" void fn_035800bc(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r3 = (*(void **)((char *)(arg0) + (0x64)));
    if (temp_r3 != 0) {
        temp_r4 = (*(void **)((char *)(arg0) + (0x68)));
        if (temp_r4 != 0) {
            fn_0357fecc(temp_r3, temp_r4);
            (*(void **)((char *)(arg0) + (0x68))) = 0;
        }
    }
}
