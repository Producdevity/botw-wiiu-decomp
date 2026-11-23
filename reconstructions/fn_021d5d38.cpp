typedef unsigned char u8;
typedef int s32;

extern "C" void fn_021d8598(void*, void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void *, void *, void *);

extern "C" void fn_021d5d38(void *arg0, void *arg1) {
    if (((s32) *(*(u8 **)((char *)(arg0) + (0x78))) != 0) && (fn_03794838(arg0, 0, 0) != 0)) {
        fn_030ea2cc(arg0);
        return;
    }
    fn_021d8598(arg0, arg1);
}
