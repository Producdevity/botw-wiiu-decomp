typedef int s32;

extern "C" void fn_0217c274(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10037784;

namespace {
struct Object {
    char padding_0[0x1C];
    char member_1c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0217dc1c(void *object) {
    Pair pair;

    fn_0217c274(object);
    pair.second = &data_10263910;
    pair.first = &data_10037784;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_1c, &pair.first);
}
