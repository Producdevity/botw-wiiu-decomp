typedef int s32;
typedef float f32;

extern "C" void fn_021081b8(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10022838;
extern "C" s32 data_1002283c;

extern "C" void fn_02109430(void *object) {
    fn_021081b8(object);
    fn_037946f0(object, (s32) &data_1002283c, 1, 0, 0, data_10022838);
}
