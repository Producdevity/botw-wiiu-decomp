typedef int s32;
typedef float f32;

extern "C" void fn_022f89fc(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10097290;
extern "C" s32 data_10097294;

extern "C" void fn_02391c68(void *arg0, void *arg1) {
    fn_022f89fc(arg0, arg1);
    fn_037946f0(arg0, (s32) &data_10097294, 1, 0, 0, data_10097290);
}
