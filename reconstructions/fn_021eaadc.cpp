typedef int s32;

extern "C" void fn_021eb0e8(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004ce00;

namespace {
struct Object {
    char padding_0[0x28];
    char member_28[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021eaadc(void *object) {
    Pair pair;

    fn_021eb0e8(object);
    pair.second = &data_10263910;
    pair.first = &data_1004ce00;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_28, &pair.first);
}
