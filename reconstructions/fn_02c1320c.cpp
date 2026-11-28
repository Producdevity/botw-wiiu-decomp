extern "C" void fn_02c1413c(void *);
extern "C" void fn_02c141cc(void*, void*, void*);
extern "C" void fn_02c14a08(void*, void*, void*);
extern "C" void fn_02c18648(void *);
extern "C" void fn_02c186d8(void*, void*, void*);
extern "C" void fn_02c18e58(void*, void*, void*);

namespace {
struct Object {
    void *owner;
    char padding_4[8];
    void *first;
    char firstA[8];
    char firstB[8];
    char padding_20[4];
    void *second;
    char secondA[8];
    char secondB[8];
};
}

extern "C" void fn_02c1320c(void *object) {
    void *first = ((Object *)object)->first;
    if (first != 0) {
        fn_02c1413c(first);
        fn_02c14a08(((Object *)object)->first, ((Object *)object)->firstB, ((Object *)object)->owner);
        fn_02c141cc(((Object *)object)->first, ((Object *)object)->firstA, ((Object *)object)->owner);
    }
    void *second = ((Object *)object)->second;
    if (second != 0) {
        fn_02c18648(second);
        fn_02c18e58(((Object *)object)->second, ((Object *)object)->secondB, ((Object *)object)->owner);
        fn_02c186d8(((Object *)object)->second, ((Object *)object)->secondA, ((Object *)object)->owner);
    }
}
