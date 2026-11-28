extern "C" void fn_02c156c4(void*);
extern "C" void fn_02c15cbc(void *);
extern "C" void fn_02c1c560(void *);

namespace {
struct Owner {
    char padding_0[8];
    void* first;
    void* second;
    void* third;
};
}

extern "C" void fn_02c11c7c(void *object) {
    void *first = ((Owner*)object)->first;
    if (first != 0) {
        fn_02c1c560(first);
    }
    void *second = ((Owner*)object)->second;
    if (second != 0) {
        fn_02c15cbc(second);
    }
    void *third = ((Owner*)object)->third;
    if (third != 0) {
        fn_02c156c4(third);
    }
}
