typedef int s32;

extern "C" void fn_0359bb54(void*, void*, void*);

extern "C" s32 data_1004e1c0;

extern "C" void fn_021efa54(void **arg0) {
    struct { s32 f8; s32 fC; } sp;
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != 0) {
        sp.f8 = 0;
        sp.fC = 0;
        fn_0359bb54(temp_r3, &data_1004e1c0, &sp.f8);
    }
}
