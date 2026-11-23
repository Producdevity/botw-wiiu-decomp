typedef int s32;

extern "C" void fn_0307d8d4(void*);
extern "C" void fn_03080a14(int, void*);

extern "C" void fn_023998ac(void *arg0) {
    if ((void **) (*(void ***)((char *)(arg0) + (0x10))) != 0) {
        fn_03080a14(0x21, 0);
        fn_0307d8d4(*(*(void ***)((char *)(arg0) + (0x10))));
    }
    (*(s32 *)((char *)(arg0) + (0x14))) = 0;
}
