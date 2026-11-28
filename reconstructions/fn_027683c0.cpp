typedef int s32;

extern "C" void fn_025b8498(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101286a0;

namespace {
struct Fn027683c0Self {
    char padding_0[0x40];
    char member_40[1];
};

struct Fn027683c0Self2 {
    const void *first;
    const void *second;
};
}

extern "C" void fn_027683c0(void *object) {
    Fn027683c0Self2 pair;

    fn_025b8498(object);
    pair.second = &data_10263910;
    pair.first = &data_101286a0;
    fn_030ea284(object, static_cast<Fn027683c0Self *>(object)->member_40, &pair.first);
}
