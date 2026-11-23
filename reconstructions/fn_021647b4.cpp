typedef int s32;
typedef float f32;

extern "C" void fn_023f9ebc(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10032f38;
extern "C" s32 data_10032f3c;

extern "C" void fn_021647b4(void *arg0) {
    fn_023f9ebc(arg0);
    fn_037946f0(arg0, (s32) &data_10032f3c, 0, 0, 0, data_10032f38);
}
