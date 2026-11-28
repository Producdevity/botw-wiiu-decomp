typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb85d0(void*);
extern "C" void fn_03cc401c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e5a6c;

namespace {
struct OutputObject {
    char padding_0[0x28];
    s32 *vtable;
};
}

extern "C" struct OutputView *fn_03cb8650(struct OutputView *view) {
    ((OutputObject *)view)->vtable = &data_103e4380;
    fn_03c92f6c(view);
    ((OutputObject *)view)->vtable = &data_103e5a6c;
    fn_03cc401c((char *)view + 0x48);
    fn_03cb85d0(view);
    return view;
}
