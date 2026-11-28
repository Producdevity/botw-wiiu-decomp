typedef int s32;
typedef float f32;

extern "C" void fn_02344914(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_1006a25c;
extern "C" s32 data_1006a260;

extern "C" void fn_022791f4(void *object, void *context) {
    fn_02344914(object, context);
    fn_037946f0(object, (s32) &data_1006a260, 0, 0, 0, data_1006a25c);
}
