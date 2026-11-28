typedef int s32;

extern "C" void fn_02232514(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004a098;

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

extern "C" void fn_021df720(void *object) {
    Pair pair;

    fn_02232514(object);
    pair.second = &data_10263910;
    pair.first = &data_1004a098;
    fn_030ea284(object, static_cast<Object *>(object)->member_40, &pair.first);
}
