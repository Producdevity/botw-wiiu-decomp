typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02d75480(void*);
extern "C" void fn_0378b1f0(void*, void*);
extern "C" void fn_0379884c(void *, void *);

extern "C" void fn_02d314d4(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x90))) != 0) {
        fn_0379884c((*(void **)((char *)(arg0) + (0))), (char *)arg0 + 0x20);
    }
    fn_0378b1f0((*(void **)((char *)(arg0) + (0))), 0);
    fn_02d75480((*(void **)((char *)(arg0) + (0))));
}
