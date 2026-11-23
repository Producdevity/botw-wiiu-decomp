typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03c9f2bc(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e4884;

extern "C" struct OutputView *fn_03c9f2fc(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4884;
    fn_03c9f2bc(arg0);
    return arg0;
}
