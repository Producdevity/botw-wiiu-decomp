extern "C" void fn_0383a31c(void*, int, float);
extern "C" void fn_03588268(void*);
extern "C" void fn_02f22f20(void*, void*);
extern "C" void* data_104722a8;
extern "C" void* data_1047c6e0;
extern "C" const float data_1022fb48;
extern "C" const float data_1022f87c;

extern "C" void fn_02f678cc(char* self) {
    if (*(void**)(self + 0x21A8) != 0) {
        fn_0383a31c(data_1047c6e0, 0x1A, data_1022fb48);
        fn_0383a31c(data_1047c6e0, 0x1B, data_1022f87c);
        fn_03588268(data_104722a8);
        fn_02f22f20(*(void**)(self + 0x21A8), (void*)2);
    }
}
