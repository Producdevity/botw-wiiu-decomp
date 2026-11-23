typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cbb844(void*);
extern "C" void fn_03cbcd24(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e5e54;

extern "C" struct OutputView *fn_03cbb884(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e5e54;
    fn_03cbcd24((char *)arg0 + 0x48);
    fn_03cbb844(arg0);
    return arg0;
}
