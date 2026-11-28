typedef int s32;

extern "C" void fn_02201e5c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10051d94;

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

extern "C" void fn_02202650(void *object) {
    Pair pair;

    fn_02201e5c(object);
    pair.second = &data_10263910;
    pair.first = &data_10051d94;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_64, &pair.first);
}
