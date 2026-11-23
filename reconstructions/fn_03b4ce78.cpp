typedef int s32;

extern "C" void fn_0308eacc(void *, int, void *, int);

extern "C" void fn_03b4ce78(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    if (arg1 > 0) {
        fn_0308eacc((void *)(arg0 + 0x10), arg1, arg3, 4);
        fn_0308eacc((void *)(arg0 + 0x1C), arg1, arg3, 4);
    }
    if (arg2 > 0) {
        fn_0308eacc((void *)(arg0 + 0x28), arg2, arg3, 4);
        fn_0308eacc((void *)(arg0 + 0x34), arg2, arg3, 4);
    }
}
