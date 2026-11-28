typedef int s32;

extern "C" void fn_02226644(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004d8e0;

namespace {
struct Object {
    char padding_0[0x5C];
    char member_5c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021ed3b4(void *object) {
    Pair pair;

    fn_02226644(object);
    pair.second = &data_10263910;
    pair.first = &data_1004d8e0;
    fn_030e9c7c(object, static_cast<Object *>(object)->member_5c, &pair.first);
}
