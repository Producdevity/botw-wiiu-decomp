typedef int s32;

extern "C" void fn_024bdc70(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100d35e8;

namespace {
struct Object {
    char padding_F4[0xF4];
    char member;
};
}

extern "C" void fn_0250d370(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_024bdc70(object);
    registration.second = &data_10263910;
    registration.first = &data_100d35e8;
    fn_030ea284(object, &((Object *) object)->member, &registration.first);
}
