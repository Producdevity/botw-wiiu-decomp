typedef int s32;

extern "C" void fn_02558070(void*);
extern "C" void fn_030e9fac(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100de4e0;

namespace {
struct Object {
    char padding_38[0x38];
    char member;
};
}

extern "C" void fn_02559ea4(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02558070(object);
    registration.second = &data_10263910;
    registration.first = &data_100de4e0;
    fn_030e9fac(object, &((Object *) object)->member, &registration.first);
}
