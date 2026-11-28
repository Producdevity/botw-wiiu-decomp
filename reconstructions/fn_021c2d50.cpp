extern "C" void fn_030ea2cc(void *);
extern "C" void fn_03679688(void*, void*, int, void*, void*);
extern "C" void *data_1047be88;

namespace {
struct Object {
    char padding_0[0x10];
    void **value_10;
};
}

extern "C" void fn_021c2d50(void *object) {
    fn_03679688(data_1047be88, *((Object *) object)->value_10, 1, 0, 0);
    fn_030ea2cc(object);
}
