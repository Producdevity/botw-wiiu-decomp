typedef int s32;

extern "C" void fn_037e6fbc(int);

extern "C" void fn_0312da64(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x25C))) != 0) {
        fn_037e6fbc((s32) ((char *)arg0 + 0x1F0));
        (*(s32 *)((char *)(arg0) + (0x25C))) = 0;
    }
}
