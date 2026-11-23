typedef signed char s8;

extern "C" int fn_0288f1b4(void*);
extern "C" void fn_02898520(void *);

extern "C" void fn_0288f30c(void *arg0) {
    if (fn_0288f1b4(arg0) != 0) {
        (*(s8 *)((char *)(arg0) + (0x38))) = 1;
    }
    fn_02898520(arg0);
}
