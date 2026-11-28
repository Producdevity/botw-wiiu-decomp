extern "C" unsigned fn_03488464(void *);
extern "C" void fn_034aaad0(void*, void*);

namespace {
struct Object {
    char padding_0[0x70];
    char member_70[0x10];
    int value_80;
};
struct Target {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_03488aec(void *object, void *argument) {
    Object *view = (Object *) object;
    if (view->value_80 == 0) {
        fn_034aaad0(view->member_70, argument);
        return;
    }
    ((int (*)()) ((Target *) fn_03488464(object))->vtable[25])();
}
