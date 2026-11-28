typedef int s32;

extern "C" void fn_02651530(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10100330;

namespace {
struct Fn02650d9cSelf {
    char padding_0[0x24];
    char member_24[1];
};

struct Fn02650d9cSelf2 {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02650d9c(void *object) {
    Fn02650d9cSelf2 pair;

    fn_02651530(object);
    pair.second = &data_10263910;
    pair.first = &data_10100330;
    fn_030e9be0(object, static_cast<Fn02650d9cSelf *>(object)->member_24, &pair.first);
}
