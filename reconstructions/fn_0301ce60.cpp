extern "C" void fn_02f26f20(void*);

namespace {
struct Object {
    char padding_0[0x1B80];
    void *first;
    void *second;
};
}

extern "C" void fn_0301ce60(void *arg0) {
    Object *object = (Object *)arg0;
    void *first;
    void *second;

    first = object->first;
    if (first != 0) {
        fn_02f26f20(first);
    }
    second = object->second;
    if (second != 0) {
        fn_02f26f20(second);
    }
}
