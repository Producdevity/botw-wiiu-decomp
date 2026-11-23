typedef signed char s8;

extern "C" void fn_0211bd20(void*);
extern "C" int fn_0218018c(void*);
extern "C" void fn_021803cc(void*);

extern "C" void fn_02180440(void *arg0) {
    fn_0211bd20(arg0);
    if (fn_0218018c(arg0) != 0) {
        fn_021803cc(arg0);
        return;
    }
    (*(s8 *)((char *)(arg0) + (0x100))) = -1;
}
