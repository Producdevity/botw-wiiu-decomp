extern "C" void fn_020372e8(void*, void*);
extern "C" void fn_02af63ec(void*, void*);

extern "C" void fn_02037fb8(void *arg0, void *arg1) {
    fn_02af63ec(arg0, arg1);
    fn_020372e8((char *)arg0 + 0xE8C, arg1);
}
