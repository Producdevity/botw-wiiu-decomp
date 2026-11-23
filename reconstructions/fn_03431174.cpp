typedef signed char s8;

extern "C" void fn_03430f34(void*, void*);
extern "C" void fn_03431054(void*, void*);

extern "C" void fn_03431174(void *arg0, void *arg1) {
    fn_03430f34(arg0, arg1);
    fn_03431054(arg0, arg1);
    (*(s8 *)((char *)(arg0) + (0x19))) = 0;
}
