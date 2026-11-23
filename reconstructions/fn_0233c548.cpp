extern "C" void fn_0233ad30(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" bool fn_0370e3bc(void *, int, int);

extern "C" void fn_0233c548(void **arg0) {
    fn_0233ad30(arg0);
    if (fn_0370e3bc((*(void **)((char *)(*arg0) + (0x394))), 0, 0) != 0) {
        fn_030ea2cc(arg0);
    }
}
