typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb34a4(void*);
extern "C" void fn_03cb4ac0(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e5670;

extern "C" struct OutputView *fn_03cb34f0(struct OutputView *arg0) {
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e4380;
    fn_03c92f6c(arg0);
    (*(s32 **)((char *)(arg0) + (0x28))) = &data_103e5670;
    fn_03cb4ac0((char *)arg0 + 0x58);
    fn_03cb34a4(arg0);
    return arg0;
}
