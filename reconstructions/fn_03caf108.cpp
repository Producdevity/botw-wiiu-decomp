typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03caf0cc(void*);
extern "C" void fn_03caf82c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e52a8;

namespace {
struct OutputObject {
    char padding_0[0x28];
    s32 *vtable;
};
}

extern "C" struct OutputView *fn_03caf108(struct OutputView *view) {
    ((OutputObject *)view)->vtable = &data_103e4380;
    fn_03c92f6c(view);
    ((OutputObject *)view)->vtable = &data_103e52a8;
    fn_03caf82c((char *)view + 0x50);
    fn_03caf0cc(view);
    return view;
}
