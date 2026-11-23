typedef float f32;

extern "C" void fn_02eaad34(void*);
extern "C" void fn_03060c94(void*, float);

extern "C" void fn_02eaad84(void *arg0) {
    fn_03060c94((char *)arg0 + 0x1C, (*(f32 *)((char *)(arg0) + (0x34))));
    fn_03060c94((char *)arg0 + 0x44, (*(f32 *)((char *)(arg0) + (0x5C))));
    fn_02eaad34(arg0);
}
