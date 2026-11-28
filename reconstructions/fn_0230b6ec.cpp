typedef int s32;
typedef float f32;

extern "C" void fn_02345624(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100815e0;
extern "C" s32 data_100815e4;

extern "C" void fn_0230b6ec(void *object, void *value) {
    fn_02345624(object, value);
    fn_037946f0(object, (s32) &data_100815e4, 0, 0, 0, data_100815e0);
}
