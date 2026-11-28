namespace {
struct ObjectView {
    unsigned char padding_0[44];
    const void *vtable;
    unsigned char base48[84];
    unsigned char member132[324];
    signed char flag;
};
}

extern "C" unsigned char data_102179a0[];
extern "C" void fn_02e73d2c(void*);
extern "C" void fn_02f27760(void*);
extern "C" void fn_0305d6b0(void*);
extern "C" void* fn_0308e578(unsigned size);

extern "C" void* fn_02e716b4(void* object) {
    ObjectView *view;

    view = (ObjectView *)object;
    if ((view != 0) || (view = (ObjectView *)fn_0308e578(0x1CCU), ((view == 0) == 0))) {
        fn_02e73d2c(view);
        view->vtable = data_102179a0;
        fn_02f27760(view->base48);
        fn_0305d6b0(view->member132);
        view->flag = 0;
    }
    return view;
}
