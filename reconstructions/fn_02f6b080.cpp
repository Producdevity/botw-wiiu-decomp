typedef unsigned int u32;

extern "C" void fn_02ea6a84(void *, unsigned);
extern "C" void fn_02f6b020(void*);

extern "C" void *data_104698f8;

extern "C" void fn_02f6b080(void *arg0, u32 arg1) {
    if (arg1 < 0xFU) {
        fn_02ea6a84(data_104698f8, arg1);
        fn_02f6b020(arg0);
    }
}
