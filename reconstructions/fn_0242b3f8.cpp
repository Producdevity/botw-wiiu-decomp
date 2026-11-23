typedef float f32;

extern "C" void fn_02362a54(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" void fn_0379241c(void*, float);

extern "C" f32 data_100b2ad0;
extern "C" f32 data_100b2ae0;

extern "C" void fn_0242b3f8(void *arg0) {
    fn_02362a54(arg0);
    fn_0379241c((char *)arg0 + 0x68, data_100b2ae0);
    if ((*(f32 *)((char *)(arg0) + (0x68))) < data_100b2ad0) {
        fn_030ea2cc(arg0);
    }
}
