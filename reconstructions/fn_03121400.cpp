extern "C" void fn_03138640(void*, void*);
extern "C" void fn_0378a70c(void*, void*);

namespace {
struct Object {
    char padding_0[0x140];
    void *listener;
};
}

extern "C" void fn_03121400(void *object, void *arg) {
    void *listener;

    listener = ((Object *)object)->listener;
    if (listener != 0) {
        fn_03138640(listener, object);
    }
    fn_0378a70c(object, arg);
}
