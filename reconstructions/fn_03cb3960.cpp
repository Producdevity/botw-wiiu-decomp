typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb3920(void*);
extern "C" void fn_03cb4210(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e571c;

namespace {
struct OutputObject {
    char padding_0[0x28];
    s32 *vtable;
};
}

extern "C" struct OutputView *fn_03cb3960(struct OutputView *view) {
    ((OutputObject *)view)->vtable = &data_103e4380;
    fn_03c92f6c(view);
    ((OutputObject *)view)->vtable = &data_103e571c;
    fn_03cb4210((char *)view + 0x50);
    fn_03cb3920(view);
    return view;
}
