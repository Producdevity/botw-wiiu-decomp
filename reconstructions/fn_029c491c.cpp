extern "C" void fn_029c36d8(void*);
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_1017d5f4;

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

extern "C" void fn_029c491c(void *object) {
    Pair pair;
    fn_029c36d8(object);
    pair.second = &data_10263910;
    pair.first = &data_1017d5f4;
    fn_030ff7a8(object, static_cast<Object *>(object)->member_40, &pair);
}
