typedef signed char s8;

extern "C" void fn_02bf9c8c(void*);
extern "C" void fn_02bf9d18(void*);
extern "C" void fn_02bfa158(void*);

extern "C" void fn_02bfa41c(void *arg0) {
    fn_02bf9c8c(arg0);
    fn_02bf9d18(arg0);
    fn_02bfa158(arg0);
    (*(s8 *)((char *)(arg0) + (0xC0))) = 0;
}
