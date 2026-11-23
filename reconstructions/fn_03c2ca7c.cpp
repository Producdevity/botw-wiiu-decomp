extern "C" unsigned char data_103dbe90[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c218e8(void*);
extern "C" void fn_042180b8(void* object, unsigned flags);

extern "C" void fn_03c2ca7c(void* arg0, int arg1) {
    if (arg0 != 0) {
        (*(const void**)arg0) = data_103dbe90;
        if ((int) (*(unsigned char*)((char*)arg0 + 1801)) != 0) {
            fn_03c218e8(arg0);
        }
        (*(signed char*)((char*)arg0 + 1796)) = 0;
        fn_042180b8((char*)arg0 + 4, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
