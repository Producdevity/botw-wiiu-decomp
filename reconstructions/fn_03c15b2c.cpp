extern "C" unsigned char data_103dbbc8[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c124a4(void*, void*);
extern "C" void fn_03c15abc(void*);

extern "C" void fn_03c15b2c(void* arg0, int arg1) {
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 716)) = data_103dbbc8;
        fn_03c15abc(arg0);
        fn_03c124a4(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
