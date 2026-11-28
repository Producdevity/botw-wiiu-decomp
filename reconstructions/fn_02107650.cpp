typedef int s32;

extern "C" void fn_021082a0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100223f4;

namespace {
struct Object {
    char padding_0[0x94];
    char member_94[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02107650(void *object) {
    Pair pair;

    fn_021082a0(object);
    pair.second = &data_10263910;
    pair.first = &data_100223f4;
    fn_030e9be0(object, static_cast<Object *>(object)->member_94, &pair.first);
}
