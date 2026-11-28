typedef int s32;

extern "C" void fn_0308eacc(void *, int, void *, int);

extern "C" void fn_03b4ce78(s32 address, s32 first_count, s32 second_count, void *context) {
    if (first_count > 0) {
        fn_0308eacc((void *)(address + 0x10), first_count, context, 4);
        fn_0308eacc((void *)(address + 0x1C), first_count, context, 4);
    }
    if (second_count > 0) {
        fn_0308eacc((void *)(address + 0x28), second_count, context, 4);
        fn_0308eacc((void *)(address + 0x34), second_count, context, 4);
    }
}
