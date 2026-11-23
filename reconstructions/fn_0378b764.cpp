typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0378ac20(void*);
extern "C" void fn_0379033c(void*, void*);
extern "C" void fn_03790590(void*, void*);
extern "C" void* data_1047c244;

extern "C" void fn_0378b764(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x54))) != 3) {
        fn_03790590(data_1047c244, arg0);
        fn_0379033c(data_1047c244, arg0);
        fn_0378ac20(arg0);
    }
}
