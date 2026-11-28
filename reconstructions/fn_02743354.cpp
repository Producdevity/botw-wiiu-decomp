typedef int s32;

extern "C" void fn_02594ef8(void*);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10122340;

namespace {
struct Object {
    char padding_BC[0xBC];
    char member;
};
}

extern "C" void fn_02743354(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02594ef8(object);
    registration.second = &data_10263910;
    registration.first = &data_10122340;
    fn_030ea164(object, &((Object *) object)->member, &registration.first);
}
