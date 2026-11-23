typedef int s32;
typedef float f32;

extern "C" void fn_02344914(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_1006a25c;
extern "C" s32 data_1006a260;

extern "C" void fn_022791f4(void *arg0, void *arg1) {
    fn_02344914(arg0, arg1);
    fn_037946f0(arg0, (s32) &data_1006a260, 0, 0, 0, data_1006a25c);
}
