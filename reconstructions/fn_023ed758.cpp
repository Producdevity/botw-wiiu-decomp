typedef float f32;

extern "C" void fn_022e5df4(void*);
extern "C" void fn_03793fcc(void*);
extern "C" void fn_037941f0(void*, void*, float);

extern "C" f32 data_100a7c94;

extern "C" void fn_023ed758(void *arg0) {
    fn_037941f0((char *)arg0 + 0xA0, (*(void **)((char *)(arg0) + (0x9C))), data_100a7c94);
    fn_03793fcc((char *)arg0 + 0xA0);
    fn_022e5df4(arg0);
}
