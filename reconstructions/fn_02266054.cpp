typedef int s32;
typedef float f32;

extern "C" void fn_0214e454(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100663a8;
extern "C" s32 data_100663ac;

extern "C" void fn_02266054(void *object) {
    fn_0214e454(object);
    fn_037946f0(object, (s32) &data_100663ac, 0, 0, 0, data_100663a8);
}
