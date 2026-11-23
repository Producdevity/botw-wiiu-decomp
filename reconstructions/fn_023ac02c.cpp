typedef int s32;
typedef float f32;

extern "C" void fn_0318f2f4(void *, float *, int);
extern "C" int fn_037a4ed8(void*);

extern "C" f32 data_1009cea0;

extern "C" void fn_023ac02c(void **arg0) {
    struct { f32 f8; } sp;
    s32 temp_r3;

    temp_r3 = fn_037a4ed8(*arg0);
    if (temp_r3 != 0) {
        sp.f8 = data_1009cea0;
        fn_0318f2f4((void *) temp_r3, &sp.f8, 0);
    }
}
