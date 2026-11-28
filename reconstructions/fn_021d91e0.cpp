typedef int s32;

extern "C" void fn_021d7ec8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100484c4;

namespace {
struct Object {
    char padding_0[0x50];
    char member_50[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021d91e0(void *object) {
    Pair pair;

    fn_021d7ec8(object);
    pair.second = &data_10263910;
    pair.first = &data_100484c4;
    fn_030e9be0(object, static_cast<Object *>(object)->member_50, &pair.first);
}
