typedef int s32;

extern "C" void fn_02ea3a70(void*);
extern "C" void fn_030513f8(void*, void*);

extern "C" void *data_104698f8;
extern "C" s32 data_105481c8;

extern "C" void fn_03051508(void *arg0) {
    if ((void *) data_104698f8 != 0) {
        fn_02ea3a70(data_104698f8);
    }
    fn_030513f8(arg0, &data_105481c8);
}
