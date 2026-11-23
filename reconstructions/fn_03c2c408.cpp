extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c24828(void*);
extern "C" void fn_03c2c3f4(void* object, unsigned flags);
extern "C" void fn_042181f4(void* object, unsigned flags);

extern "C" void fn_03c2c408(void* arg0, int arg1) {
    if (arg0 != 0) {
        fn_03c24828(arg0);
        fn_03c2c3f4((char*)arg0 + 1192, 2U);
        fn_042181f4((char*)arg0 + 584, 2U);
        fn_042181f4((char*)arg0 + 12, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
