typedef int s32;
typedef float f32;

extern "C" void fn_0318f2f4(void *, float *, int);
extern "C" int fn_037a4ed8(void*);

extern "C" f32 data_1009cea0;

extern "C" void fn_023ac02c(void **object) {
    struct { f32 value; } args;
    s32 target;

    target = fn_037a4ed8(*object);
    if (target != 0) {
        args.value = data_1009cea0;
        fn_0318f2f4((void *) target, &args.value, 0);
    }
}
