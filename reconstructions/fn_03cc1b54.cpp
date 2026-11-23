typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb76a4(void*);
extern "C" void fn_03cc213c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e6354;

extern "C" struct OutputView *fn_03cc1b54(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e6354;
    fn_03cc213c((char *)arg0 + 0x48);
    fn_03cb76a4(arg0);
    return arg0;
}
