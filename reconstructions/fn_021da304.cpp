typedef int s32;

extern "C" void fn_021db0e8(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100489fc;

namespace {
struct Object {
    char padding_0[0x8C];
    char member_8c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021da304(void *object) {
    Pair pair;

    fn_021db0e8(object);
    pair.second = &data_10263910;
    pair.first = &data_100489fc;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_8c, &pair.first);
}
