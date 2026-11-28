typedef int s32;

extern "C" void fn_02189484(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10039bdc;

namespace {
struct Object {
    char padding_0[0x14];
    char member_14[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02189aac(void *object) {
    Pair pair;

    fn_02189484(object);
    pair.second = &data_10263910;
    pair.first = &data_10039bdc;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_14, &pair.first);
}
