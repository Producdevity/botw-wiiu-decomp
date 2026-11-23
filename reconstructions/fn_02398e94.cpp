typedef int s32;
typedef float f32;

extern "C" void fn_02345624(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" f32 data_100986a0;
extern "C" s32 data_100986a4;

extern "C" void fn_02398e94(void *arg0, void *arg1) {
    fn_02345624(arg0, arg1);
    fn_037946f0(arg0, (s32) &data_100986a4, 0, 0, 0, data_100986a0);
}
