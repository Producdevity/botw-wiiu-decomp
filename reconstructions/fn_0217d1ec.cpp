typedef int s32;

extern "C" void fn_030ea11c(void*, void*, void*);
extern "C" void fn_032c7ac8(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10037608;

namespace {
struct Object {
    char padding_0[0x3C];
    char member_3c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0217d1ec(void *object) {
    Pair pair;

    fn_032c7ac8(object);
    pair.second = &data_10263910;
    pair.first = &data_10037608;
    fn_030ea11c(object, static_cast<Object *>(object)->member_3c, &pair.first);
}
