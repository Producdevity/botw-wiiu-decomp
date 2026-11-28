extern "C" void fn_029c8a18(void*);
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_101837f8;

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

extern "C" void fn_029dff40(void *object) {
    Pair pair;
    fn_029c8a18(object);
    pair.second = &data_10263910;
    pair.first = &data_101837f8;
    fn_030ff7a8(object, static_cast<Object *>(object)->member_28, &pair);
}
