extern "C" void fn_02c8d6c4(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;
extern "C" int data_101dbb68;

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

extern "C" void fn_02ced874(void *object) {
    Pair pair;
    fn_02c8d6c4(object);
    pair.second = &data_10263910;
    pair.first = &data_101dbb68;
    fn_030e9be0(object, static_cast<Object *>(object)->member_20, &pair);
}
