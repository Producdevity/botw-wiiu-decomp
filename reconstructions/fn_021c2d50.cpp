extern "C" void fn_030ea2cc(void *);
extern "C" void fn_03679688(void*, void*, int, void*, void*);

extern "C" void *data_1047be88;

extern "C" void fn_021c2d50(void *arg0) {
    fn_03679688(data_1047be88, *(*(void ***)((char *)(arg0) + (0x10))), 1, 0, 0);
    fn_030ea2cc(arg0);
}
