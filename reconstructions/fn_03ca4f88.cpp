typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03ca387c(void*);
extern "C" void fn_03ca4f48(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e4dd4;

extern "C" struct OutputView *fn_03ca4f88(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4dd4;
    fn_03ca387c((char *)arg0 + 0x48);
    fn_03ca4f48(arg0);
    return arg0;
}
