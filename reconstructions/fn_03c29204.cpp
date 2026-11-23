extern "C" unsigned char data_103dbea8[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c29148(void*);
extern "C" void fn_03c291a8(void*, int);

extern "C" void fn_03c29204(void* arg0, int arg1) {
    if (arg0 != 0) {
        (*(const void**)arg0) = data_103dbea8;
        fn_03c29148(arg0);
        fn_03c291a8((char*)arg0 + 52, 2);
        (*(signed char*)((char*)arg0 + 48)) = 0;
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
