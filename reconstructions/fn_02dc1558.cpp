extern "C" void fn_02dc0ea4(void*, void*, void*);
extern "C" void fn_031b8de0(void*, void*, void*);

extern "C" void fn_02dc1558(void *arg0, void *arg1, void *arg2) {
    fn_031b8de0(arg0, arg1, arg2);
    fn_02dc0ea4(arg0, (*(void **)((char *)(arg1) + (0x1C))), arg2);
}
