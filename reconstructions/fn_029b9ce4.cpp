extern "C" void fn_029b9a24(void*);
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_1017bb2c;

namespace {
struct Object {
    char padding_0[0x1c];
    char member_1c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_029b9ce4(void *object) {
    Pair pair;
    fn_029b9a24(object);
    pair.second = &data_10263910;
    pair.first = &data_1017bb2c;
    fn_030ff7a8(object, static_cast<Object *>(object)->member_1c, &pair);
}
