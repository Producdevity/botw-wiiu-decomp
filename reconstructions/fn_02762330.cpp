typedef int s32;

extern "C" void fn_02761f90(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10127590;

namespace {
struct Fn02762330Self {
    char padding_0[0x24];
    char member_24[1];
};

struct Fn02762330Self2 {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02762330(void *object) {
    Fn02762330Self2 pair;

    fn_02761f90(object);
    pair.second = &data_10263910;
    pair.first = &data_10127590;
    fn_030e9b44(object, static_cast<Fn02762330Self *>(object)->member_24, &pair.first);
}
