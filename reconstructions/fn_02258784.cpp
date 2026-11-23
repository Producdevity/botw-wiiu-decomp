typedef float f32;

extern "C" void fn_02257ae4(void*);
extern "C" void fn_0379241c(void*, float);

extern "C" f32 data_100637d0;
extern "C" f32 data_100637e0;

extern "C" void fn_02258784(void *arg0) {
    if ((*(f32 *)((char *)(arg0) + (0x3C))) > data_100637d0) {
        fn_0379241c((char *)arg0 + 0x3C, data_100637e0);
    }
    fn_02257ae4(arg0);
}
