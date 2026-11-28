typedef int s32;

extern "C" void fn_022a82e0(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10034220;

namespace {
struct Object {
    char padding_0[0x18];
    char member_18[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0216b088(void *object) {
    Pair pair;

    fn_022a82e0(object);
    pair.second = &data_10263910;
    pair.first = &data_10034220;
    fn_030ea23c(object, static_cast<Object *>(object)->member_18, &pair.first);
}
