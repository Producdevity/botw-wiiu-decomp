typedef int s32;
typedef float f32;

extern "C" void fn_0210da9c(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100234a4;
extern "C" s32 data_100234a8;

extern "C" void fn_0210d764(void *object) {
    fn_0210da9c(object);
    fn_037946f0(object, (s32) &data_100234a8, 1, 0, 0, data_100234a4);
}
