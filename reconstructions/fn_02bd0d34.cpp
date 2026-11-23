typedef float f32;

extern "C" void fn_02bd0a14(void*, void*, float);

extern "C" void fn_02bd0d34(void *arg0) {
    fn_02bd0a14(arg0, (char *)arg0 + 0x6C, (*(f32 *)((char *)(arg0) + (0x78))));
    (*(f32 *)((char *)(arg0) + (0x70))) = (f32) ((*(f32 *)((char *)(arg0) + (0x70))) + (*(f32 *)((char *)(arg0) + (0x7C))));
}
