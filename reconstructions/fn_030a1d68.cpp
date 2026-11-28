extern "C" void fn_030a1c6c(void *, void *);
extern "C" bool fn_030bb670(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Context {
    char padding_0[0x20];
    void *lock;
};

struct Object {
    char padding_0[0x40];
    Context *context;
};
}

extern "C" void fn_030a1d68(void *object, int value) {
    Object *slot;
    if (fn_030bb670(((Object *) object)->context->lock) != 0) {
        fn_030a1c6c(object, (void *) value);
        slot = (Object *) object;
        fn_030bb69c(slot->context->lock);
    }
}
