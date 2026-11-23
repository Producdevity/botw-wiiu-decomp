extern "C" void fn_037fd130(void*, void*);
extern "C" char* data_1047c3d8;

extern "C" void fn_034d3fa8(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x14C)));
    if (temp_r4 != 0) {
        fn_037fd130(data_1047c3d8, temp_r4);
        (*(void **)((char *)(arg0) + (0x14C))) = 0;
    }
}
