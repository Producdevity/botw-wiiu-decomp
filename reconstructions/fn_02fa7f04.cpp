namespace {
struct Object {
    char padding_0[0x10];
    void* field_10;
    char padding_14[0x90];
    void* field_A4;
    void* field_A8;
};
}

extern "C" void fn_02e6bf5c(void*, unsigned);
extern "C" void fn_03008534(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

extern "C" int data_1023f030;
extern "C" int data_1023f040;
extern "C" int data_1023f058;

extern "C" void fn_02fa7f04(void* arg0, int arg1) {
    if (arg0 != 0) {
        ((Object*)arg0)->field_10 = &data_1023f030;
        ((Object*)arg0)->field_A8 = &data_1023f040;
        ((Object*)arg0)->field_A4 = &data_1023f058;
        fn_02e6bf5c((char*)arg0 + 0x1B90, 2U);
        fn_03008534(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
