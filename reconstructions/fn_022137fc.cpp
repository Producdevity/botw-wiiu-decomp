typedef int s32;

extern "C" void fn_022134f0(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10056070;

namespace {
struct Object {
    char padding_0[0x28];
    char member_28[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_022137fc(void *object) {
    Pair pair;

    fn_022134f0(object);
    pair.second = &data_10263910;
    pair.first = &data_10056070;
    fn_030ea03c(object, static_cast<Object *>(object)->member_28, &pair.first);
}
