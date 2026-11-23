typedef int s32;

struct InferredObject;
extern "C" void fn_03170958(void*, unsigned int);
extern "C" int fn_03171cd8(void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016d664;

extern "C" void fn_02953a00(void *arg0) {
    struct { const void* f8; const void* fC; } sp;
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x3D0)));
    if (temp_r3 != 0) {
        sp.fC = &data_10263910;
        sp.f8 = &data_1016d664;
        temp_r3_2 = fn_03171cd8(temp_r3, &sp.f8);
        if (temp_r3_2 != 0) {
            fn_03170958((struct InferredObject *) temp_r3_2, 1U);
        }
    }
}
