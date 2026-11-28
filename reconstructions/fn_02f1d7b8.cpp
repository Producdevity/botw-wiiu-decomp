typedef int s32;

extern "C" unsigned char fn_02ea96c4(void *);
extern "C" void fn_02f3595c(void*);

extern "C" void *data_104698f8;

extern "C" void fn_02f1d7b8(s32 object) {
    if (fn_02ea96c4(data_104698f8) != 0) {
        fn_02f3595c((void *)(object + 0xD8));
    }
}
