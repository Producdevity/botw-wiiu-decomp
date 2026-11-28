typedef int s32;
typedef float f32;

extern "C" void fn_022f89fc(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10066e34;
extern "C" s32 data_10066e38;

extern "C" void fn_02269944(void *object, void *context) {
    fn_022f89fc(object, context);
    fn_037946f0(object, (s32) &data_10066e38, 0, 0, 0, data_10066e34);
}
