extern "C" void fn_034c4a28(void*, void*);
extern "C" void fn_034ceb00(void*);

namespace {
struct Object {
    char padding_0[0x18];
    void *first;
    char padding_1C[4];
    void *second;
};
}

extern "C" void fn_0248f504(void *object, void *context) {
    void *first;
    void *second;

    first = ((Object *)object)->first;
    if (first != 0) {
        fn_034c4a28(context, first);
        ((Object *)object)->first = 0;
    }
    second = ((Object *)object)->second;
    if (second != 0) {
        fn_034ceb00(second);
        ((Object *)object)->second = 0;
    }
}
