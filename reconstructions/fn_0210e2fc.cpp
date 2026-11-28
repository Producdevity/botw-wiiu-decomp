typedef int s32;

extern "C" void fn_0210ded4(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100239e8;

namespace {
struct Object {
    char padding_0[0x70];
    char member_70[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0210e2fc(void *object) {
    Pair pair;

    fn_0210ded4(object);
    pair.second = &data_10263910;
    pair.first = &data_100239e8;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_70, &pair.first);
}
