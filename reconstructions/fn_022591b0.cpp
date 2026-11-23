typedef int s32;
typedef float f32;

extern "C" void fn_02259540(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10063b0c;
extern "C" s32 data_10063b10;

extern "C" void fn_022591b0(void *arg0) {
    fn_02259540(arg0);
    fn_037946f0(arg0, (s32) &data_10063b10, 1, 0, 0, data_10063b0c);
}
