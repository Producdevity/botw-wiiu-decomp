extern "C" void fn_025e83d8(void *);
extern "C" void fn_02888fb4(void*, void*, void*);
extern "C" void fn_0294f828(void*, void*);

extern "C" void fn_028898e4(void **arg0) {
    fn_0294f828(*arg0, (char *)arg0 + 0x17C);
    fn_02888fb4(arg0, 0, 0);
    fn_025e83d8(arg0);
}
