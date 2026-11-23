typedef int s32;
typedef float f32;

extern "C" void fn_0210da9c(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10023b90;
extern "C" s32 data_10023b94;

extern "C" void fn_0210e5e4(void *arg0) {
    fn_0210da9c(arg0);
    fn_037946f0(arg0, (s32) &data_10023b94, 1, 0, 0, data_10023b90);
}
