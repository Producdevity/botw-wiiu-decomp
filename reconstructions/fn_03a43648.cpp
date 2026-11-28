typedef int s32;

namespace {
struct ObjectView {
    unsigned char padding_0[0x130];
    s32 *firstVtable;
    unsigned char padding_134[0xC];
    s32 *secondVtable;
};
}

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030be71c(void*);

extern "C" s32 data_1035df40;
extern "C" s32 data_1035df78;

extern "C" void *fn_03a43648(void *object) {
    ObjectView *view;

    view = (ObjectView *)object;
    if ((view != 0) || (view = (ObjectView *)fn_0308e578(0x1F4U), ((view == 0) == 0))) {
        fn_030be71c(view);
        view->firstVtable = &data_1035df40;
        view->secondVtable = &data_1035df78;
    }
    return view;
}
