extern "C" int fn_0339eae8(void*);
extern "C" void fn_03486cd4(void*, void*, int);

namespace {
struct Object {
    char padding_0[0x1F8];
    char member[1];
};
}

extern "C" void fn_02158858(void **holder) {
    void *object = *holder;
    int found = fn_0339eae8(object);

    if (found != 0) {
        fn_03486cd4((void *)found, ((Object *)object)->member, 1);
    }
}
