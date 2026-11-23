typedef unsigned int u32;

extern "C" void fn_0248751c(void*, int);

extern "C" void fn_024875dc(void *arg0) {
    if (((u32) (*(u32 *)((char *)(arg0) + (0xF00))) >> 4U) & 1) {
        fn_0248751c(arg0, 0);
    }
    if (((*(u32 *)((char *)(arg0) + (0xF00))) >> 5U) & 1) {
        fn_0248751c(arg0, 1);
    }
}
