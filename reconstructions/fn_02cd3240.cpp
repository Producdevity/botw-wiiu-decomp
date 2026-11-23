extern "C" void fn_02d7af44(void*, void*);
extern "C" void fn_030ea2cc(void *);
extern "C" bool fn_0370e3bc(void *, int, int);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_02cd3240(void **arg0) {
    fn_02d7af44(*arg0, (void *)(data_10549dd0));
    if (fn_0370e3bc((*(void **)((char *)(*arg0) + (0x394))), 0, 0) != 0) {
        fn_030ea2cc(arg0);
    }
}
