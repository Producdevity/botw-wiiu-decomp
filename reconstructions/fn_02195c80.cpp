typedef int s32;
typedef float f32;

extern "C" void fn_022f89fc(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_1003b790;
extern "C" s32 data_1003b794;

extern "C" void fn_02195c80(void *object, void *context) {
    fn_022f89fc(object, context);
    fn_037946f0(object, (s32) &data_1003b794, 1, 0, 0, data_1003b790);
}
