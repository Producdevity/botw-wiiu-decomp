typedef signed char s8;

extern "C" void fn_029c875c(void *);
extern "C" void fn_029c9284(void *);

extern "C" void fn_029e3030(void *arg0) {
    fn_029c875c(arg0);
    (*(s8 *)((char *)(arg0) + (0xAC))) = 1;
    (*(s8 *)((char *)(arg0) + (0xAD))) = 0;
    fn_029c9284(arg0);
}
