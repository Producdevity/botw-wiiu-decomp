typedef int s32;
typedef float f32;

extern "C" void fn_02126a5c(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10027a60;
extern "C" s32 data_10027a64;

extern "C" void fn_02126bac(void *object) {
    fn_02126a5c(object);
    fn_037946f0(object, (s32) &data_10027a64, 0, 0, 0, data_10027a60);
}
