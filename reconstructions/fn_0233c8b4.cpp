extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_0233c8b4(void *arg0) {
    if (fn_03794838(arg0, *(*(void ***)((char *)(arg0) + (0x10))), *(*(void ***)((char *)(arg0) + (0x14)))) != 0) {
        fn_030ea2cc(arg0);
    }
}
