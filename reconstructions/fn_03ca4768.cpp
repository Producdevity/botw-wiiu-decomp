typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03ca4718(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e4d60;

extern "C" struct OutputView *fn_03ca4768(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4d60;
    fn_03ca4718(arg0);
    return arg0;
}
