typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02b30f3c(void*, void*);
extern "C" void fn_02b31208(void*);

extern "C" void fn_02b3149c(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x50))) != 0) {
        (*(u8 *)((char *)(arg0) + (0x50))) = 0U;
        fn_02b30f3c(arg0, (*(void **)((char *)(arg0) + (0x4C))));
        fn_02b31208(arg0);
    }
}
