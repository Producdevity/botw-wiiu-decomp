typedef int s32;

extern "C" void fn_0220d320(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1005964c;

namespace {
struct Object {
    char padding_0[0x1C];
    char member_1c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0221fa30(void *object) {
    Pair pair;

    fn_0220d320(object);
    pair.second = &data_10263910;
    pair.first = &data_1005964c;
    fn_030e9be0(object, static_cast<Object *>(object)->member_1c, &pair.first);
}
