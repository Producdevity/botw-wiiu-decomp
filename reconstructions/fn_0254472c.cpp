typedef int s32;

extern "C" void fn_02780ac4(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100dae98;

namespace {
struct Object {
    char padding_26C[0x26C];
    char member;
};
}

extern "C" void fn_0254472c(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02780ac4(object);
    registration.second = &data_10263910;
    registration.first = &data_100dae98;
    fn_030e9b44(object, &((Object *) object)->member, &registration.first);
}
