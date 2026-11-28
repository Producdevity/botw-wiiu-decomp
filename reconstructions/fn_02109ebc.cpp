typedef int s32;

extern "C" void fn_0210b858(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10022d2c;

namespace {
struct Object {
    char padding_0[0xA8];
    char member_a8[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02109ebc(void *object) {
    Pair pair;

    fn_0210b858(object);
    pair.second = &data_10263910;
    pair.first = &data_10022d2c;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_a8, &pair.first);
}
