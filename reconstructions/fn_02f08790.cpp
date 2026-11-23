extern "C" void fn_02f086d0(void*, void*);
extern "C" void fn_02f0a74c(void*, void*);

extern "C" void fn_02f08790(void *arg0, void *arg1) {
    fn_02f086d0(arg0, (*(void **)((char *)(arg1) + (8))));
    fn_02f0a74c((char *)arg0 + 0xD4, arg1);
}
