typedef int s32;

extern "C" void fn_0213efc0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1002b820;

namespace {
struct Object {
    char padding_0[0x58];
    char member_58[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021405e4(void *object) {
    Pair pair;

    fn_0213efc0(object);
    pair.second = &data_10263910;
    pair.first = &data_1002b820;
    fn_030e9b44(object, static_cast<Object *>(object)->member_58, &pair.first);
}
