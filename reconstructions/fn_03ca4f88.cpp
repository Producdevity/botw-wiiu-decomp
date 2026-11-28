typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void* fn_03ca387c(void*);
extern "C" void fn_03ca4f48(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e4dd4;

namespace {
struct OutputObject {
    char padding_0[0x28];
    s32 *vtable;
};
}

extern "C" struct OutputView *fn_03ca4f88(struct OutputView *view) {
    ((OutputObject *)view)->vtable = &data_103e4380;
    fn_03c92f6c(view);
    ((OutputObject *)view)->vtable = &data_103e4dd4;
    fn_03ca387c((char *)view + 0x48);
    fn_03ca4f48(view);
    return view;
}
