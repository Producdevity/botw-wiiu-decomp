typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb00fc(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e54bc;

extern "C" struct OutputView *fn_03cb0190(struct OutputView *arg0, s32 arg1) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e54bc;
    fn_03cb00fc(arg0);
    (*(s32 *)((char *)(arg0) + (0x38))) = arg1;
    return arg0;
}
