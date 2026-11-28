typedef int s32;

extern "C" void fn_0291cbe0(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016544c;

namespace {
struct Fn0291d7ecSelf {
    char padding_0[0x20];
    char member_20[1];
};

struct Fn0291d7ecSelf2 {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0291d7ec(void *object) {
    Fn0291d7ecSelf2 pair;

    fn_0291cbe0(object);
    pair.second = &data_10263910;
    pair.first = &data_1016544c;
    fn_030e9be0(object, static_cast<Fn0291d7ecSelf *>(object)->member_20, &pair.first);
}
