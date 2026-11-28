extern "C" void fn_03593430(void*, void*, void*, void*, void*);
extern "C" void fn_035935b8(void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_102e70a4;

namespace {
struct Object {
    char padding_0[0xe2c];
    char member_e2c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_03593684(void *object) {
    Pair pair;
    fn_035935b8(object);
    pair.second = &data_10263910;
    pair.first = &data_102e70a4;
    fn_03593430(object, static_cast<Object *>(object)->member_e2c, &pair, 0, 0);
}
