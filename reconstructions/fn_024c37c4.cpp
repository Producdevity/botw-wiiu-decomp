typedef int s32;

extern "C" void fn_028986c0(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100c7cc4;

namespace {
struct Object {
    char padding_2C[0x2C];
    char member;
};
}

extern "C" void fn_024c37c4(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_028986c0(object);
    registration.second = &data_10263910;
    registration.first = &data_100c7cc4;
    fn_030ea284(object, &((Object *) object)->member, &registration.first);
}
