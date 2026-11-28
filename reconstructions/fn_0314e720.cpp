typedef int s32;
typedef float f32;

namespace {
struct ObjectView {
    unsigned char padding_0[0x4C];
    s32 *vtable;
    unsigned char padding_50[4];
    f32 value;
};
}

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0314e564(void*);

extern "C" f32 data_10286944;
extern "C" s32 data_10286bb8;

extern "C" void *fn_0314e720(void *object) {
    ObjectView *view;

    view = (ObjectView *)object;
    if ((view != 0) || (view = (ObjectView *)fn_0308e578(0x58U), ((view == 0) == 0))) {
        fn_0314e564(view);
        view->vtable = &data_10286bb8;
        view->value = data_10286944;
    }
    return view;
}
