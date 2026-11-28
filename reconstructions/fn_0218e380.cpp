typedef int s32;

extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_03267a68(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1003a840;

namespace {
struct Object {
    char padding_0[0x20];
    char member_20[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0218e380(void *object) {
    Pair pair;

    fn_03267a68(object);
    pair.second = &data_10263910;
    pair.first = &data_1003a840;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_20, &pair.first);
}
