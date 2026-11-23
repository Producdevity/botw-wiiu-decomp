typedef int s32;

extern "C" void fn_025e83d8(void *);
extern "C" void fn_0294f828(void*, void*);
extern "C" void fn_02b3a988(void*, void*);

extern "C" void fn_02752968(void *arg0) {
    fn_025e83d8(arg0);
    if ((s32) (*(s32 *)((char *)(arg0) + (0x2E4))) != 0) {
        fn_0294f828((*(void **)((char *)(arg0) + (0))), (char *)arg0 + 0x2DC);
    }
    fn_02b3a988((char *)arg0 + 0x1A8, (*(void **)((char *)(arg0) + (0))));
}
