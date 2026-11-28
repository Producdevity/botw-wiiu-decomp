typedef int s32;

extern "C" void fn_02912b28(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101636cc;

namespace {
struct Fn02914ee0Self {
    char padding_0[0x20];
    char member_20[1];
};

struct Fn02914ee0Self2 {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02914ee0(void *object) {
    Fn02914ee0Self2 pair;

    fn_02912b28(object);
    pair.second = &data_10263910;
    pair.first = &data_101636cc;
    fn_030e9be0(object, static_cast<Fn02914ee0Self *>(object)->member_20, &pair.first);
}
