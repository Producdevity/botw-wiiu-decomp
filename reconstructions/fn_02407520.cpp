extern "C" void fn_02959f64(int, int, void*);

namespace {
struct Callbacks {
    char padding_0[220];
    int (*callback)(void *, int);
};
struct Object {
    char padding_0[28];
    Callbacks *callbacks;
};
}

extern "C" void fn_02407520(int *value, void *object, int arg, int index) {
    ((Object *) object)->callbacks->callback(object, arg);
    fn_02959f64(index, *value, object);
}
