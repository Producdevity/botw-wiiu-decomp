extern "C" void fn_02945d9c(void*);
extern "C" void fn_02c1a484(void*);
extern "C" void fn_0339a0c4(void *);
extern "C" void fn_03985a50(void*, int, void*);

extern "C" void fn_02945de8(void **arg0) {
    fn_03985a50((*(void **)((char *)(*arg0) + (0x330))), 1, 0);
    fn_02c1a484(*arg0);
    fn_0339a0c4(*arg0);
    fn_02945d9c(arg0);
}
