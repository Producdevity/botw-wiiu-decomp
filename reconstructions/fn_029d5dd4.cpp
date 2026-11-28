extern "C" void fn_029d4d34(void*);
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_10181004;

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

extern "C" void fn_029d5dd4(void *object) {
    Pair pair;
    fn_029d4d34(object);
    pair.second = &data_10263910;
    pair.first = &data_10181004;
    fn_030ff774(object, static_cast<Object *>(object)->member_18, &pair);
}
