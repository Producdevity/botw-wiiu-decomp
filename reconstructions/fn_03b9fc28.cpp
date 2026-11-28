extern "C" void fn_03b9e8e4(void*, void*, void*);
extern "C" void fn_03b9f188(void*, void*, void*);

namespace {
struct Object {
    char padding_0[0x18];
    void *value_18;
};
}

extern "C" void fn_03b9fc28(void *object, void *first, void *second) {
    fn_03b9e8e4(((Object *) object)->value_18, first, second);
    fn_03b9f188(object, first, second);
}
