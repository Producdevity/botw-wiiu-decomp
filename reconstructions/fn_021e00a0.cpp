typedef int s32;

extern "C" void fn_0245da40(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004a2a0;

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

extern "C" void fn_021e00a0(void *object) {
    Pair pair;

    fn_0245da40(object);
    pair.second = &data_10263910;
    pair.first = &data_1004a2a0;
    fn_030ea284(object, static_cast<Object *>(object)->member_40, &pair.first);
}
