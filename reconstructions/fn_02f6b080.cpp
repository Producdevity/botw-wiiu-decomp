typedef unsigned int u32;

extern "C" void fn_02ea6a84(void *, unsigned);
extern "C" void fn_02f6b020(void*);

extern "C" void *data_104698f8;

extern "C" void fn_02f6b080(void *object, u32 index) {
    if (index < 0xFU) {
        fn_02ea6a84(data_104698f8, index);
        fn_02f6b020(object);
    }
}
