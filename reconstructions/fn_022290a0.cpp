typedef int s32;

extern "C" void fn_02228684(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1005bbd8;

namespace {
struct Object {
    char padding_0[0x3C];
    char member_3c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_022290a0(void *object) {
    Pair pair;

    fn_02228684(object);
    pair.second = &data_10263910;
    pair.first = &data_1005bbd8;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_3c, &pair.first);
}
