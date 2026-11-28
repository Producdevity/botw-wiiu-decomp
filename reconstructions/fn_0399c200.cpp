extern "C" void fn_030c078c(void*, void*, void*);
extern "C" void fn_030c44cc(void*, void*, void*);

namespace {
struct Object {
    unsigned char padding_0[0x1B0];
    void *first;
    void *second;
};
}

extern "C" void fn_0399c200(void *object, void *context, void *extra) {
    void *first = ((Object *)object)->first;
    if (first != 0) {
        fn_030c078c(first, context, extra);
        fn_030c44cc(((Object *)object)->second, context, ((Object *)object)->first);
    }
}
