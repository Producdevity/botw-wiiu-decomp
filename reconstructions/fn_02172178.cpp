typedef int s32;

extern "C" void fn_0233c904(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10035700;

namespace {
struct Object {
    char padding_0[0x24];
    char member_24[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02172178(void *object) {
    Pair pair;

    fn_0233c904(object);
    pair.second = &data_10263910;
    pair.first = &data_10035700;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_24, &pair.first);
}
