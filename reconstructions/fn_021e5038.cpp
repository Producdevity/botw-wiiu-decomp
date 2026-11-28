typedef int s32;

extern "C" void fn_021e4924(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1004b5f8;

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

extern "C" void fn_021e5038(void *object) {
    Pair pair;

    fn_021e4924(object);
    pair.second = &data_10263910;
    pair.first = &data_1004b5f8;
    fn_030e9c7c(object, static_cast<Object *>(object)->member_5c, &pair.first);
}
