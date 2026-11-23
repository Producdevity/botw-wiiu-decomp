typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02b30fbc(void*, void*);
extern "C" void fn_02b31208(void*);

extern "C" void fn_02b31380(void *arg0, u8 arg1) {
    if (((s32) (*(u8 *)((char *)(arg0) + (0x30))) == 0) || ((u8) (*(u8 *)((char *)(arg0) + (0x50))) != arg1)) {
        (*(u8 *)((char *)(arg0) + (0x50))) = arg1;
        (*(u8 *)((char *)(arg0) + (0x30))) = 1U;
        fn_02b30fbc(arg0, (void *) arg1);
        fn_02b31208(arg0);
    }
}
