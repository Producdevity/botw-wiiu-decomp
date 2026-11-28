extern "C" void fn_030578e0(void *);
extern "C" int fn_03060e78(void *, void *);

namespace {
struct Object {
    char padding_0[0x40C94];
    char member_40c94[0x18];
    unsigned char flag_40cac;
};
}

extern "C" void fn_03057920(void *object, void *argument)
{
    Object *view = (Object *)object;
    if (view->flag_40cac != 0 && fn_03060e78(view->member_40c94, argument) != 0) {
        fn_030578e0(object);
    }
}
