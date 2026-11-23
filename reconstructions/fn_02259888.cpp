typedef int s32;
typedef float f32;

extern "C" void fn_02259540(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10063e74;
extern "C" s32 data_10063e78;

extern "C" void fn_02259888(void *arg0) {
    fn_02259540(arg0);
    fn_037946f0(arg0, (s32) &data_10063e78, 1, 0, 0, data_10063e74);
}
