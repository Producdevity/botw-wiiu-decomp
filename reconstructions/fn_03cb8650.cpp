typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb85d0(void*);
extern "C" void fn_03cc401c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e5a6c;

extern "C" struct OutputView *fn_03cb8650(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e5a6c;
    fn_03cc401c((char *)arg0 + 0x48);
    fn_03cb85d0(arg0);
    return arg0;
}
