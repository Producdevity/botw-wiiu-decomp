namespace {
struct Object {
    char padding_0[0x10];
    void* field_10;
    char padding_14[0x90];
    void* field_A4;
    void* field_A8;
};
}

extern "C" void fn_030bb614(void*, unsigned);
extern "C" void fn_03605650(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

extern "C" int data_102fa808;
extern "C" int data_102fa818;
extern "C" int data_102fa830;

extern "C" void fn_0360be04(void* arg0, int arg1) {
    if (arg0 != 0) {
        ((Object*)arg0)->field_10 = &data_102fa808;
        ((Object*)arg0)->field_A8 = &data_102fa818;
        ((Object*)arg0)->field_A4 = &data_102fa830;
        fn_030bb614((char*)arg0 + 0x410, 2U);
        fn_03605650(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
