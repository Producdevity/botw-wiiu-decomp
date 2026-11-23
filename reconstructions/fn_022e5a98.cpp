typedef int s32;
typedef float f32;

extern "C" void fn_022f89fc(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10079bf4;
extern "C" s32 data_10079bf8;

extern "C" void fn_022e5a98(void *arg0, void *arg1) {
    fn_022f89fc(arg0, arg1);
    fn_037946f0(arg0, (s32) &data_10079bf8, 0, 0, 0, data_10079bf4);
}
