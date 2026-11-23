typedef int s32;

extern "C" void fn_03babf48(void*);

extern "C" void fn_03bade8c(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x15C))) != 0) {
        fn_03babf48(arg0);
    }
    (*(s32 *)((char *)(arg0) + (0x15C))) = 0;
}
