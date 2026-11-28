typedef int s32;

extern "C" void fn_02181538(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10028f5c;

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

extern "C" void fn_02131b78(void *object) {
    Pair pair;

    fn_02181538(object);
    pair.second = &data_10263910;
    pair.first = &data_10028f5c;
    fn_030e9be0(object, static_cast<Object *>(object)->member_20, &pair.first);
}
