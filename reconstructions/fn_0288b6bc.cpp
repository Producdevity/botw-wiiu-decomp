extern "C" void fn_025e83d8(void *);
extern "C" void fn_0288ac9c(void*, void*, void*);
extern "C" void fn_0294f828(void*, void*);

extern "C" void fn_0288b6bc(void **arg0) {
    fn_0294f828(*arg0, (char *)arg0 + 0x180);
    fn_0288ac9c(arg0, 0, 0);
    fn_025e83d8(arg0);
}
