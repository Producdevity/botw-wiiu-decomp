extern "C" void fn_03b68354(void*, void*);
extern "C" void fn_04348048(void*, void*, int);

namespace {
struct Object {
    char padding_0[0xC];
    void *target;
};
}

extern "C" void fn_03b683a8(void *object, void *target) {
    ((Object *) object)->target = target;
    fn_04348048(object, 0, 1);
    fn_03b68354(object, ((Object *) object)->target);
}
