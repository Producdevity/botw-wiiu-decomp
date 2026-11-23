typedef int s32;
typedef float f32;

extern "C" void fn_0244694c(void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100b6f10;
extern "C" s32 data_100b6f14;

extern "C" void fn_02446560(void *arg0) {
    fn_0244694c(arg0);
    fn_037946f0(arg0, (s32) &data_100b6f14, 1, 0, 0, data_100b6f10);
}
