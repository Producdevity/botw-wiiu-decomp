extern "C" void fn_025e754c(void*, void*);
extern "C" void fn_02b5f6a8(void*, void*, int, void*, void*, void*);

extern "C" void fn_0290e1bc(void **arg0, void *arg1) {
    fn_02b5f6a8(*arg0, (char *)arg0 + 0x130, 1, 0, 0, 0);
    fn_025e754c(arg0, arg1);
}
