typedef int s32;

extern "C" void fn_0230b268(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100210e0;

namespace {
struct Object {
    char padding_0[0x88];
    char member_88[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02100b60(void *object) {
    Pair pair;

    fn_0230b268(object);
    pair.second = &data_10263910;
    pair.first = &data_100210e0;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_88, &pair.first);
}
