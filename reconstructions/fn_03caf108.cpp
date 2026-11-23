typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03caf0cc(void*);
extern "C" void fn_03caf82c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e52a8;

extern "C" struct OutputView *fn_03caf108(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e52a8;
    fn_03caf82c((char *)arg0 + 0x50);
    fn_03caf0cc(arg0);
    return arg0;
}
