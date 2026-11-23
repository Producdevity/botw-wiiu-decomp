typedef int s32;
typedef float f32;

extern "C" void fn_03548860(void *);

extern "C" f32 data_102e0a7c;

extern "C" void fn_0354fa94(void *arg0) {
    fn_03548860((char *)arg0 + 0xC);
    (*(s32 *)((char *)(arg0) + (0x1C0))) = 0;
    (*(f32 *)((char *)(arg0) + (0x1C4))) = (f32) data_102e0a7c;
}
