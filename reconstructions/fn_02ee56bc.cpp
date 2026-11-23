typedef float f32;

extern "C" void fn_02ee505c(void*);
extern "C" int fn_02ee5548(void*);
extern "C" void fn_02ee5638(void*, float);

extern "C" f32 data_1021f548;

extern "C" void fn_02ee56bc(void *arg0) {
    if (fn_02ee5548(arg0) != 0) {
        fn_02ee5638((char *)arg0 + 0x25C, data_1021f548);
        fn_02ee505c(arg0);
    }
}
