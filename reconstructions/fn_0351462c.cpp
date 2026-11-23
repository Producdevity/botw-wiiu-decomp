typedef signed char s8;

extern "C" int fn_035145c0(void*);
extern "C" void fn_0351edbc(void*);

extern "C" void fn_0351462c(void *arg0) {
    (*(s8 *)((char *)((*(void **)((char *)(arg0) + (0x70)))) + (0x1A8))) = 1;
    if (fn_035145c0(arg0) != 0) {
        fn_0351edbc((*(void **)((char *)(arg0) + (0x74))));
    }
}
