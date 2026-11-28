extern "C" void fn_024996c8(void* object);
extern "C" void fn_02499734(void* object);
extern "C" void fn_02af3048(void* resource);
extern "C" void fn_033222a8(void* object, void* other);

namespace {
struct Object {
    unsigned char padding_0[0x558];
    void* resource;
};
}

extern "C" void fn_024997cc(void* object, void* other) {
    fn_024996c8(object);
    fn_02499734(object);
    void* resource = ((Object*)object)->resource;
    if (resource != 0) {
        fn_02af3048(resource);
        ((Object*)object)->resource = 0;
    }
    fn_033222a8(object, other);
}
