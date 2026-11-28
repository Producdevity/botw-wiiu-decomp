typedef int s32;

extern "C" void fn_02225540(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100567d0;

namespace {
struct Object {
    char padding_0[0x24];
    char member_24[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02215570(void *object) {
    Pair pair;

    fn_02225540(object);
    pair.second = &data_10263910;
    pair.first = &data_100567d0;
    fn_030ea23c(object, static_cast<Object *>(object)->member_24, &pair.first);
}
