typedef signed char s8;
typedef float f32;

extern "C" void fn_02b9e1fc(void*);
extern "C" void fn_02b9e270(void *);
extern "C" void fn_02b9e358(void*);

extern "C" f32 data_101b3690;

extern "C" void fn_02b9e3bc(void *arg0) {
    fn_02b9e1fc(arg0);
    fn_02b9e270((char *)arg0 + 0xD0);
    (*(s8 *)((char *)(arg0) + (0xD1))) = 3;
    fn_02b9e358(arg0);
    (*(f32 *)((char *)(arg0) + (0x40))) = (f32) data_101b3690;
}
