typedef int s32;

extern "C" void fn_03ca7de4(void*);
extern "C" void fn_03cc279c(void*);

extern "C" s32 data_103e64b8;

extern "C" void *fn_03cc282c(void *arg0) {
    fn_03ca7de4(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e64b8;
    fn_03cc279c(arg0);
    return arg0;
}
