extern "C" void fn_02b7e394(void*, void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;
extern "C" int data_1005b48c;

namespace {
struct Object {
    char padding_0[0x10];
    char member_10[1];
    char padding_11[0x53];
    char member_64[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02227cec(void *object) {
    Pair pair;
    fn_02b7e394(static_cast<Object *>(object)->member_10, object);
    pair.second = &data_10263910;
    pair.first = &data_1005b48c;
    fn_030e9d18(object, static_cast<Object *>(object)->member_64, &pair);
}
