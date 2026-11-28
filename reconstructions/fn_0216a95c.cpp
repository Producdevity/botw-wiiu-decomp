typedef int s32;

extern "C" void fn_020680ac(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100340c0;

namespace {
struct Object {
    char padding_0[0x7D4];
    char member_7d4[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0216a95c(void *object) {
    Pair pair;

    fn_020680ac(object);
    pair.second = &data_10263910;
    pair.first = &data_100340c0;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_7d4, &pair.first);
}
