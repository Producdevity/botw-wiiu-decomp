typedef int s32;
typedef float f32;

extern "C" void fn_03548860(void *);

extern "C" f32 data_102d5b10;

extern "C" void fn_0351b03c(void *arg0) {
    fn_03548860((char *)arg0 + 0xC);
    (*(s32 *)((char *)(arg0) + (0x138))) = 0;
    (*(f32 *)((char *)(arg0) + (0x13C))) = (f32) data_102d5b10;
}
