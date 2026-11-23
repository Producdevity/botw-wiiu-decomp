extern "C" void fn_02b1c9b4(void*, void*);
extern "C" void fn_02b1cafc(void*, void*, void*);

extern "C" void fn_02b1cb98(void *arg0, void *arg1) {
    fn_02b1c9b4(arg0, arg1);
    fn_02b1cafc(arg0, arg1, (char *)arg0 + 0xA0);
}
