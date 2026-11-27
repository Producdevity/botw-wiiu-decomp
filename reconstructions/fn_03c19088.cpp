extern "C" bool fn_03c124c0(const void*);

namespace {
struct Object {
    char padding_0[4];
    void *target;
};
}

extern "C" int fn_03c19088(void *object) {
    void *target = ((Object *)object)->target;

    if (target == 0 || fn_03c124c0(target) == 0) {
        return 0;
    }
    return 1;
}
