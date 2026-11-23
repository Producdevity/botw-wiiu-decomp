typedef unsigned char u8;
typedef int s32;

extern "C" void fn_025a1ed0(void*, void*);
extern "C" void fn_027db084(void *);

extern "C" void fn_027db260(void *arg0, void *arg1) {
    if ((s32) *(*(u8 **)((char *)(arg0) + (0x3C))) != 0) {
        fn_027db084(arg0);
    }
    fn_025a1ed0(arg0, arg1);
}
