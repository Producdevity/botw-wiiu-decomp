typedef int s32;

extern "C" void fn_02200044(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1005af74;

namespace {
struct Object {
    char padding_0[0x48];
    char member_48[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02226644(void *object) {
    Pair pair;

    fn_02200044(object);
    pair.second = &data_10263910;
    pair.first = &data_1005af74;
    fn_030e9b44(object, static_cast<Object *>(object)->member_48, &pair.first);
}
