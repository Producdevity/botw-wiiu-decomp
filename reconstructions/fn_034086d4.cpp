typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_034085e8(void*, void*, float);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1046f448;

extern "C" void fn_034086d4(void *arg0, s32 arg1, f32 farg0) {
    struct { s32 f8; const void* fC; } sp;

    if ((arg1 != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0xC1A))) != 4)) {
        sp.fC = &data_10263910;
        sp.f8 = data_1046f448;
        fn_034085e8(arg0, &sp.f8, farg0);
    }
}
