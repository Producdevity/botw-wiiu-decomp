extern "C" void fn_037d71ec(void*, int);
extern "C" void fn_037d734c(void*);
extern "C" int fn_037fbff0(void);

extern "C" void fn_037f01d8(void *arg0) {
    fn_037fbff0();
    fn_037d734c((*(void **)((char *)(arg0) + (0xEC))));
    fn_037d71ec((*(void **)((char *)(arg0) + (0xEC))), 3);
    fn_037d734c((*(void **)((char *)(arg0) + (0xE4))));
    fn_037d734c((*(void **)((char *)(arg0) + (0xE8))));
    fn_037d734c((*(void **)((char *)(arg0) + (0xE0))));
    fn_037fbff0();
}
