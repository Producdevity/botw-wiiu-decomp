typedef int s32;

extern "C" void fn_030bc67c(void*);
extern "C" void fn_037fed84(void*, int, void*, void*, void*);
extern "C" char* data_1047c3d8;

extern "C" void fn_034584e8(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        fn_037fed84(data_1047c3d8, 0, 0, 0, 0);
    }
    fn_030bc67c((void *)(arg0 + 0x70));
}
