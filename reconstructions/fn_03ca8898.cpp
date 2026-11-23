typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03ca8810(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e5180;

extern "C" struct OutputView *fn_03ca8898(struct OutputView *arg0, s32 arg1) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e5180;
    fn_03ca8810(arg0);
    (*(s32 *)((char *)(arg0) + (0x60))) = arg1;
    return arg0;
}
