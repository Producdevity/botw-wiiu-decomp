extern "C" void fn_0290315c(void*);
extern "C" void fn_03458474(void*);
extern "C" void fn_03485f68(void*);

namespace {
struct Owner {
    char padding_0[0x30];
    void* first;
    void* second;
    void* third;
};
}

extern "C" void fn_02903444(void *object) {
    void *first = ((Owner*)object)->first;
    if (first != 0) {
        fn_03458474(first);
    }
    void *second = ((Owner*)object)->second;
    if (second != 0) {
        fn_03485f68(second);
    }
    void *third = ((Owner*)object)->third;
    if (third != 0) {
        fn_03485f68(third);
    }
    fn_0290315c(object);
}
