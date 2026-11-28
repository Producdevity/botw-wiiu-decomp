typedef int s32;

extern "C" void fn_0245da40(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10049ad8;

namespace {
struct Object {
    char padding_0[0x40];
    char member_40[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021de1f4(void *object) {
    Pair pair;

    fn_0245da40(object);
    pair.second = &data_10263910;
    pair.first = &data_10049ad8;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_40, &pair.first);
}
