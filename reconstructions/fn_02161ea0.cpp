typedef int s32;
typedef float f32;

extern "C" void fn_02345624(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_1003251c;
extern "C" s32 data_10032520;

extern "C" void fn_02161ea0(void *object, void *context) {
    fn_02345624(object, context);
    fn_037946f0(object, (s32) &data_10032520, 0, 0, 0, data_1003251c);
}
