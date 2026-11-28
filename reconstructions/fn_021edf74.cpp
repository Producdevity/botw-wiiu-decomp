typedef int s32;

extern "C" void fn_021eb974(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004dd50;

namespace {
struct Object {
    char padding_0[0x38];
    char member_38[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021edf74(void *object) {
    Pair pair;

    fn_021eb974(object);
    pair.second = &data_10263910;
    pair.first = &data_1004dd50;
    fn_030e9b44(object, static_cast<Object *>(object)->member_38, &pair.first);
}
