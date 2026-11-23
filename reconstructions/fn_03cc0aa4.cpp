typedef int s32;

extern "C" void fn_03ca7de4(void*);
extern "C" void fn_03cc0a14(void*);

extern "C" s32 data_103e6230;

extern "C" void *fn_03cc0aa4(void *arg0) {
    fn_03ca7de4(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e6230;
    fn_03cc0a14(arg0);
    return arg0;
}
