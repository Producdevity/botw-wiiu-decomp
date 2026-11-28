struct FlyingCharacterFreeFallBase;
extern "C" void fn_021d84e4(FlyingCharacterFreeFallBase*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;
extern "C" int data_1004869c;

namespace {
struct Object {
    char padding_0[0x50];
    char member_50[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_021d964c(void *object) {
    Pair pair;
    fn_021d84e4(static_cast<FlyingCharacterFreeFallBase *>(object));
    pair.second = &data_10263910;
    pair.first = &data_1004869c;
    fn_030e9be0(object, static_cast<Object *>(object)->member_50, &pair);
}
