typedef int s32;

extern "C" void fn_02216ff0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10057030;

namespace {
struct Object {
    char padding_0[0x60];
    char member_60[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0221733c(void *object) {
    Pair pair;

    fn_02216ff0(object);
    pair.second = &data_10263910;
    pair.first = &data_10057030;
    fn_030e9b44(object, static_cast<Object *>(object)->member_60, &pair.first);
}
