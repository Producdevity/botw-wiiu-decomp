typedef int s32;

extern "C" void fn_022177b4(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10056e9c;

namespace {
struct Object {
    char padding_0[0x58];
    char member_58[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02216ff0(void *object) {
    Pair pair;

    fn_022177b4(object);
    pair.second = &data_10263910;
    pair.first = &data_10056e9c;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_58, &pair.first);
}
