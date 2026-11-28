extern "C" void fn_029c91a4(void*);
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_1017e0a8;

namespace {
struct Object {
    char padding_0[0x20];
    char member_20[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_029c86a0(void *object) {
    Pair pair;
    fn_029c91a4(object);
    pair.second = &data_10263910;
    pair.first = &data_1017e0a8;
    fn_030ff7a8(object, static_cast<Object *>(object)->member_20, &pair);
}
