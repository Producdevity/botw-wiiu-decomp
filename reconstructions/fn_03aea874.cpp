extern "C" void fn_030c078c(void*, void*, void*);
extern "C" void fn_030c44cc(void*, void*, void*);

extern "C" void fn_03aea874(void *arg0, void *arg1, void *arg2) {
    fn_030c078c((*(void **)((char *)(arg0) + (0xC))), arg1, arg2);
    fn_030c44cc((*(void **)((char *)(arg0) + (0x20))), arg1, (*(void **)((char *)(arg0) + (0xC))));
}
