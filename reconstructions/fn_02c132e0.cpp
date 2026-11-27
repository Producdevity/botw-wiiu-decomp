extern "C" void fn_02c1413c(void*);
extern "C" void fn_02c18648(void*);

namespace {
struct Object {
    unsigned char padding_0[0xC];
    void *first;
    unsigned char padding_10[0x14];
    void *second;
};
}

extern "C" void fn_02c132e0(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    void *first = object->first;
    if (first != 0) {
        fn_02c1413c(first);
    }
    void *second = object->second;
    if (second != 0) {
        fn_02c18648(second);
    }
}
