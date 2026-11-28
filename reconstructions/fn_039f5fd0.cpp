typedef unsigned char u8;
typedef int s32;

namespace {
struct ObjectView {
    unsigned char padding_0[0x18];
    s32 *vtable;
    u8 *data;
};
}

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03b2c334(void*);
extern "C" const unsigned char data_10354484[];

extern "C" s32 data_103546bc;

extern "C" void *fn_039f5fd0(void *object) {
    ObjectView *view;

    view = (ObjectView *)object;
    if ((view != 0) || (view = (ObjectView *)fn_0308e578(0xCC8U), ((view == 0) == 0))) {
        fn_03b2c334(view);
        view->vtable = &data_103546bc;
        view->data = (u8 *)(data_10354484);
    }
    return view;
}
