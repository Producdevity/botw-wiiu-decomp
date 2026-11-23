typedef unsigned char u8;
typedef int s32;

extern "C" void fn_023adffc(int);
extern "C" void fn_023ae1ac(void*);

extern "C" void fn_023ae3f0(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x48))) == 0) {
        fn_023ae1ac(arg0);
    }
    fn_023adffc((s32) arg0);
}
