typedef int s32;
typedef float f32;

extern "C" void fn_022e6408(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10079d68;
extern "C" s32 data_10079d6c;

extern "C" void fn_022e5da4(void *object) {
    fn_022e6408(object);
    fn_037946f0(object, (s32) &data_10079d6c, 1, 0, 0, data_10079d68);
}
