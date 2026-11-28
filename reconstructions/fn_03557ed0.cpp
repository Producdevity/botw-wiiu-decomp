extern "C" void fn_03548814(void *);
extern "C" void fn_03557dbc(void *, void *);

namespace {
struct Object {
    char padding_0[0xC];
    char member_c[0x12C];
    int state_138;
    char padding_13c[4];
    char member_140[1];
};
}

extern "C" void fn_03557ed0(void *object)
{
    Object *view = (Object *)object;
    if (view->state_138 == 1) {
        fn_03548814(view->member_c);
        fn_03557dbc(object, view->member_140);
    }
}
