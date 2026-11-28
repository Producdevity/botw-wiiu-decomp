typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03c9e15c(void*);
extern "C" void* fn_03c9ec04(void*);
extern "C" void fn_03caffe0(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e4754;

namespace {
struct OutputObject {
    char padding_0[0x28];
    s32 *vtable;
};
}

extern "C" struct OutputView *fn_03c9e19c(struct OutputView *view) {
    ((OutputObject *)view)->vtable = &data_103e4380;
    fn_03c92f6c(view);
    ((OutputObject *)view)->vtable = &data_103e4754;
    fn_03caffe0((char *)view + 0x48);
    fn_03c9ec04((char *)view + 0x348);
    fn_03c9e15c(view);
    return view;
}
