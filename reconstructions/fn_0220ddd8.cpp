typedef int s32;

extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100547c0;

namespace {
struct Object {
    char padding_0[0x18];
    char member_18[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0220ddd8(void *object) {
    Pair pair;

    fn_0221da1c(object);
    pair.second = &data_10263910;
    pair.first = &data_100547c0;
    fn_030e9be0(object, static_cast<Object *>(object)->member_18, &pair.first);
}
