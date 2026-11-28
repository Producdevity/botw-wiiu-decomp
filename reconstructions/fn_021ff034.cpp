typedef int s32;

extern "C" void fn_02226644(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10051260;

namespace {
struct Object {
    char padding_0[0x5C];
    char member_5c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021ff034(void *object) {
    Pair pair;

    fn_02226644(object);
    pair.second = &data_10263910;
    pair.first = &data_10051260;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_5c, &pair.first);
}
