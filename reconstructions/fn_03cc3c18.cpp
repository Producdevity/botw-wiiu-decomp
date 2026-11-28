typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb76a4(void*);
extern "C" void* fn_03cc3acc(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e65dc;

namespace {
struct OutputObject {
    char padding_0[0x28];
    s32 *vtable;
};
}

extern "C" struct OutputView *fn_03cc3c18(struct OutputView *view) {
    ((OutputObject *)view)->vtable = &data_103e4380;
    fn_03c92f6c(view);
    ((OutputObject *)view)->vtable = &data_103e65dc;
    fn_03cc3acc((char *)view + 0x48);
    fn_03cb76a4(view);
    return view;
}
