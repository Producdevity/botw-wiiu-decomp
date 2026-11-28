typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03c9bca0(void*);
extern "C" void fn_03cb32a0(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e55c0;

namespace {
struct OutputObject {
    char padding_0[0x28];
    s32 *vtable;
};
}

extern "C" struct OutputView *fn_03cb32d4(struct OutputView *view) {
    ((OutputObject *)view)->vtable = &data_103e4380;
    fn_03c92f6c(view);
    ((OutputObject *)view)->vtable = &data_103e55c0;
    fn_03c9bca0((char *)view + 0x48);
    fn_03cb32a0(view);
    return view;
}
