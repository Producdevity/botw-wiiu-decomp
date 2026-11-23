typedef int s32;

extern "C" void fn_0308eacc(void*, int, void*, int);

extern "C" void fn_03a53f7c(void *arg0, void *arg1) {
    fn_0308eacc((char *)arg0 + 0x50, 0x1000, arg1, 4);
    (*(s32 *)((char *)(arg0) + (0x50))) = 0;
}
