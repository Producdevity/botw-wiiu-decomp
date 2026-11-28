typedef int s32;

extern "C" void fn_021e70a0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004c160;

namespace {
struct Object {
    char padding_0[0x80];
    char member_80[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021e76b8(void *object) {
    Pair pair;

    fn_021e70a0(object);
    pair.second = &data_10263910;
    pair.first = &data_1004c160;
    fn_030e9be0(object, static_cast<Object *>(object)->member_80, &pair.first);
}
