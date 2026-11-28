typedef int s32;
typedef float f32;

extern "C" void fn_0241e5c0(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100afe24;
extern "C" s32 data_100afe28;

extern "C" void fn_0241e29c(void *object) {
    fn_0241e5c0(object);
    fn_037946f0(object, (s32) &data_100afe28, 0, 0, 0, data_100afe24);
}
