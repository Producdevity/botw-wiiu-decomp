namespace {
struct Object {
    char padding_0[0x10];
    void* field_10;
    char padding_14[0x90];
    void* field_A4;
    void* field_A8;
};
}

extern "C" void fn_03061c14(void*, unsigned);
extern "C" void fn_03008534(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

extern "C" int data_10259204;
extern "C" int data_10259214;
extern "C" int data_1025922c;

extern "C" void fn_0303f9a0(void* arg0, int arg1) {
    if (arg0 != 0) {
        ((Object*)arg0)->field_10 = &data_10259204;
        ((Object*)arg0)->field_A8 = &data_10259214;
        ((Object*)arg0)->field_A4 = &data_1025922c;
        fn_03061c14((char*)arg0 + 0x1BA8, 2U);
        fn_03008534(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
