typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_023fe95c(unsigned char *);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_1006a3bc;
extern "C" s32 data_1006a3c0;

extern "C" void fn_0227955c(u8 *arg0) {
    fn_023fe95c(arg0);
    fn_037946f0(arg0, (s32) &data_1006a3c0, 0, 0, 0, data_1006a3bc);
}
