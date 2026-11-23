typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03c9ad28(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e44c8;

extern "C" struct OutputView *fn_03c9ad7c(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e44c8;
    fn_03c9ad28(arg0);
    return arg0;
}
