typedef int s32;

extern "C" void fn_023fea2c(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100370d8;

namespace {
struct Object {
    char padding_0[0x18];
    char member_18[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0217c274(void *object) {
    Pair pair;

    fn_023fea2c(object);
    pair.second = &data_10263910;
    pair.first = &data_100370d8;
    fn_030e9d18(object, static_cast<Object *>(object)->member_18, &pair.first);
}
