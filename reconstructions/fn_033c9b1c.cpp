typedef int s32;

extern "C" void fn_0308eacc(void*, int, void*, int);

extern "C" void fn_033c9b1c(void *arg0, void *arg1, s32 arg2) {
    (*(s32 *)((char *)(arg0) + (4))) = arg2;
    fn_0308eacc((char *)arg0 + 8, 0x800, arg1, 4);
    (*(s32 *)((char *)(arg0) + (0))) = 1;
}
