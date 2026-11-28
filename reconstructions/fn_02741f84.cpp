typedef int s32;

extern "C" void fn_02565bac(void*);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10121fc8;

namespace {
struct Object {
    char padding_40[0x40];
    char member;
};
}

extern "C" void fn_02741f84(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02565bac(object);
    registration.second = &data_10263910;
    registration.first = &data_10121fc8;
    fn_030ea164(object, &((Object *) object)->member, &registration.first);
}
