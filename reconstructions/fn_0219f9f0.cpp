typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03077824(void*);
extern "C" void fn_030778f4(int);

extern "C" s32 fn_0219f9f0(void *arg0) {
    if ((s32) *(*(u8 **)((char *)(arg0) + (0x14))) != 0) {
        fn_03077824(*(*(void ***)((char *)(arg0) + (0x10))));
        return 1;
    }
    fn_030778f4((s32) arg0);
    return 1;
}
