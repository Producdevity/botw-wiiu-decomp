typedef int s32;
typedef float f32;

extern "C" void fn_0230b0cc(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100677f8;
extern "C" s32 data_100677fc;

extern "C" void fn_0226b738(void *object, void *context) {
    fn_0230b0cc(object, context);
    fn_037946f0(object, (s32) &data_100677fc, 0, 0, 0, data_100677f8);
}
