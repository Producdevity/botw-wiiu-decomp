typedef int s32;
typedef float f32;

namespace {
struct ObjectView {
    s32 *vtable;
    unsigned char padding_4[8];
    f32 value;
};
}

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0308f754(void*);

extern "C" f32 data_1031cce0;
extern "C" s32 data_1031cd18;

extern "C" void *fn_037d2464(void *object) {
    ObjectView *view;

    view = (ObjectView *)object;
    if ((view != 0) || (view = (ObjectView *)fn_0308e578(0x10U), ((view == 0) == 0))) {
        fn_0308f754(view);
        view->vtable = &data_1031cd18;
        view->value = data_1031cce0;
    }
    return view;
}
