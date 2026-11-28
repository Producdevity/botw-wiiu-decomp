typedef int s32;

extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_032613e4(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10025e88;

namespace {
struct Object {
    char padding_0[0x8C];
    char member_8c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021189bc(void *object) {
    Pair pair;

    fn_032613e4(object);
    pair.second = &data_10263910;
    pair.first = &data_10025e88;
    fn_030e9aa8(object, static_cast<Object *>(object)->member_8c, &pair.first);
}
