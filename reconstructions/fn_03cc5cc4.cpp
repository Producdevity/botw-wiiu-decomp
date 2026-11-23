typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cc5c88(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e68ac;

extern "C" struct OutputView *fn_03cc5cc4(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e68ac;
    fn_03cc5c88(arg0);
    return arg0;
}
