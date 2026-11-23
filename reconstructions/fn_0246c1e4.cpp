typedef unsigned char u8;
typedef int s32;

extern "C" void fn_022a0ea0(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_0246c1e4(void *arg0) {
    fn_022a0ea0(arg0);
    if (((s32) *(*(u8 **)((char *)(arg0) + (0x78))) != 0) && (fn_03794838(arg0, 0, 0) != 0)) {
        fn_030ea2cc(arg0);
    }
}
