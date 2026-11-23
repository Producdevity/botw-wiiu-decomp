typedef int s32;

extern "C" void fn_0370ea1c(void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1008db20;

extern "C" void fn_02357d14(void **arg0) {
    struct { const void* f8; const void* fC; } sp;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(*arg0) + (0x394)));
    if (temp_r3 != 0) {
        sp.fC = &data_10263910;
        sp.f8 = &data_1008db20;
        fn_0370ea1c(temp_r3, &sp.f8);
    }
}
