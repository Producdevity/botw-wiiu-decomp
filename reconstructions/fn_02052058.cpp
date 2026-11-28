extern "C" void fn_03458948(void* resource);

namespace {
struct Object {
    char padding_0[0x20];
    void *first;
    void *second;
};
}

extern "C" void fn_02052058(void* object) {
    void* first = ((Object *)object)->first;
    if (first != 0) {
        fn_03458948(first);
        ((Object *)object)->first = 0;
    }
    void* second = ((Object *)object)->second;
    if (second != 0) {
        fn_03458948(second);
        ((Object *)object)->second = 0;
    }
}
