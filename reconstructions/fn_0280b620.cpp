typedef int s32;

extern "C" void fn_0280c430(void*);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013b400;

namespace {
struct Object {
    unsigned char padding_0[0x24];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0280b620(void *object) {
    Registration registration;

    fn_0280c430(object);
    registration.second = &data_10263910;
    registration.first = &data_1013b400;
    fn_030ea164(object, ((Object *) object)->member, &registration.first);
}
