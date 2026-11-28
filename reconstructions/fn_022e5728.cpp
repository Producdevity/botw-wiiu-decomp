typedef int s32;
typedef float f32;

extern "C" void fn_02438238(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10079a60;
extern "C" s32 data_10079a64;

extern "C" void fn_022e5728(void *object) {
    fn_02438238(object);
    fn_037946f0(object, (s32) &data_10079a64, 0, 0, 0, data_10079a60);
}
