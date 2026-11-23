typedef signed char s8;

extern "C" void fn_02c56f08(void*);
extern "C" void fn_03191b40(void*, void*, void*);

extern "C" void *data_1046cf88;

extern "C" void fn_02c47798(void *arg0) {
    fn_02c56f08(arg0);
    fn_03191b40(data_1046cf88, 0, (*(void **)((char *)(arg0) + (0x11C))));
    (*(s8 *)((char *)(arg0) + (0x120))) = 0;
}
