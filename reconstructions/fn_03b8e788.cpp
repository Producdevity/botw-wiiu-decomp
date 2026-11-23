typedef int s32;
typedef float f32;

extern "C" void fn_03ba9c84(void*, float, float);

extern "C" f32 data_103c5c40;
extern "C" f32 data_103c5d50;

extern "C" void fn_03b8e788(void *arg0) {
    fn_03ba9c84((char *)arg0 + 0x34, data_103c5d50, data_103c5c40);
    (*(s32 *)((char *)(arg0) + (0x14))) = 5;
}
