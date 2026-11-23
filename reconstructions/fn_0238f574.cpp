typedef unsigned char u8;
typedef int s32;

extern "C" void fn_021405e0(void*);
extern "C" void fn_0379884c(void *, void *);

extern "C" void fn_0238f574(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0xF4))) != 0) {
        fn_0379884c((*(void **)((char *)(arg0) + (0))), (char *)arg0 + 0x98);
    }
    fn_021405e0(arg0);
}
