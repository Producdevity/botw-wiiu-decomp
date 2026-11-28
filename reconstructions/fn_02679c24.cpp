typedef int s32;

extern "C" void fn_02674a8c(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10106ebc;

namespace {
struct Fn02679c24Self {
    char padding_0[0x20];
    char member_20[1];
};

struct Fn02679c24Self2 {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02679c24(void *object) {
    Fn02679c24Self2 pair;

    fn_02674a8c(object);
    pair.second = &data_10263910;
    pair.first = &data_10106ebc;
    fn_030ea03c(object, static_cast<Fn02679c24Self *>(object)->member_20, &pair.first);
}
