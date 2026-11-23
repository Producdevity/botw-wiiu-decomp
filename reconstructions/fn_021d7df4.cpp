typedef int s32;
typedef float f32;

extern "C" void fn_021d830c(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_10047f74;
extern "C" s32 data_10047f78;

extern "C" void fn_021d7df4(void *arg0) {
    fn_021d830c(arg0);
    fn_037946f0(arg0, (s32) &data_10047f78, 0, 0, 0, data_10047f74);
}
