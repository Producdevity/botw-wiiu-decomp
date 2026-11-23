typedef unsigned int u32;

extern "C" void fn_03a2de18(void*, void*);

extern "C" void fn_03a2ec34(void *arg0, u32 arg1) {
    if (arg1 == (u32) (*(u32 *)((char *)(arg0) + (0x24)))) {
        fn_03a2de18(arg0, 0);
    }
    if (arg1 == (u32) (*(u32 *)((char *)(arg0) + (0x28)))) {
        (*(u32 *)((char *)(arg0) + (0x28))) = 0U;
    }
}
