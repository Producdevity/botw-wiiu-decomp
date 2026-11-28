extern "C" void fn_03485f68(void*);

namespace {
struct Object {
    unsigned char padding_0[0x9A0];
    void *first;
    void *second;
    void *third;
};
}

extern "C" void fn_024a8acc(void *object) {
    void *first;
    void *second;
    void *third;

    first = ((Object *)object)->first;
    if (first != 0) {
        fn_03485f68(first);
    }
    second = ((Object *)object)->second;
    if (second != 0) {
        fn_03485f68(second);
    }
    third = ((Object *)object)->third;
    if (third != 0) {
        fn_03485f68(third);
    }
}
