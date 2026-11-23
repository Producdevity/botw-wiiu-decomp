typedef int s32;

extern "C" void fn_03ca5770(void*);
extern "C" void fn_03ca7de4(void*);

extern "C" s32 data_103e4e88;

extern "C" void *fn_03ca57c0(void *arg0) {
    fn_03ca7de4(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4e88;
    fn_03ca5770(arg0);
    return arg0;
}
