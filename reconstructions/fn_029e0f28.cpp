extern "C" void fn_029df368(void*);
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_10183ab8;

namespace {
struct Object {
    char padding_0[0x24];
    char member_24[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_029e0f28(void *object) {
    Pair pair;
    fn_029df368(object);
    pair.second = &data_10263910;
    pair.first = &data_10183ab8;
    fn_030ff774(object, static_cast<Object *>(object)->member_24, &pair);
}
