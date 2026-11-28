typedef int s32;

extern "C" void fn_020f464c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10022628;

namespace {
struct Object {
    char padding_0[0x78];
    char member_78[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021082a0(void *object) {
    Pair pair;

    fn_020f464c(object);
    pair.second = &data_10263910;
    pair.first = &data_10022628;
    fn_030e9be0(object, static_cast<Object *>(object)->member_78, &pair.first);
}
