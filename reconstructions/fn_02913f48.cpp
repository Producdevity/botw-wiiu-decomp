typedef int s32;

extern "C" void fn_02912b28(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101630a4;

namespace {
struct Fn02913f48Self {
    char padding_0[0x20];
    char member_20[1];
};

struct Fn02913f48Self2 {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02913f48(void *object) {
    Fn02913f48Self2 pair;

    fn_02912b28(object);
    pair.second = &data_10263910;
    pair.first = &data_101630a4;
    fn_030e9be0(object, static_cast<Fn02913f48Self *>(object)->member_20, &pair.first);
}
