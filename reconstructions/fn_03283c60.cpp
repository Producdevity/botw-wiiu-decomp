extern "C" void fn_034ceb00(void*);
extern "C" void fn_034ced48(void*);

namespace {
struct Object {
    char padding_0[0x540];
    void *first;
    void *second;
};
}

extern "C" void fn_03283c60(void *object) {
    Object *self = (Object *)object;

    void *first = self->first;
    if (first != 0) {
        fn_034ceb00(first);
        self->first = 0;
    }
    void *second = self->second;
    if (second != 0) {
        fn_034ced48(second);
        self->second = 0;
    }
}
