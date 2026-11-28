typedef int s32;

extern "C" void fn_02201e5c(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004dbb0;

namespace {
struct Object {
    char padding_0[0x64];
    char member_64[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021edb5c(void *object) {
    Pair pair;

    fn_02201e5c(object);
    pair.second = &data_10263910;
    pair.first = &data_1004dbb0;
    fn_030e9c7c(object, static_cast<Object *>(object)->member_64, &pair.first);
}
