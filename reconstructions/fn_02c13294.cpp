typedef int s32;

extern "C" void fn_02c1413c(void*);
extern "C" void fn_02c18648(void*);

namespace {
struct Object {
    char padding_0[0xC];
    void *first;
    char padding_10[0x24 - 0x10];
    void *second;
};
}

extern "C" s32 fn_02c13294(void *object) {
    Object *self = (Object *)object;

    void *first = self->first;
    if (first != 0) {
        fn_02c1413c(first);
    }
    void *second = self->second;
    if (second != 0) {
        fn_02c18648(second);
    }
    return 1;
}
