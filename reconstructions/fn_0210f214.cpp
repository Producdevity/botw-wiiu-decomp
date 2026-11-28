typedef int s32;

extern "C" void fn_0210ff3c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10023eb0;

namespace {
struct Object {
    char padding_0[0xA4];
    char member_a4[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0210f214(void *object) {
    Pair pair;

    fn_0210ff3c(object);
    pair.second = &data_10263910;
    pair.first = &data_10023eb0;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_a4, &pair.first);
}
