extern "C" void fn_030ffc88(void*, void*, void*);
extern "C" int fn_0315bea4(void*, void*);

extern "C" void fn_0315bf84(void *arg0, void *arg1) {
    fn_030ffc88(arg1, (void *)(fn_0315bea4(arg0, arg1)), (char *)arg0 + 0xA4);
}
