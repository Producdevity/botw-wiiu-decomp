typedef int s32;
typedef unsigned int u32;

namespace {
struct Target {
    char padding_0[0x20];
    signed char value_20;
};

typedef u32 *(*IdGetter)(void **);
}

extern "C" s32 fn_02658544(void *object, void **source) {
    void *const *first_vtable;
    void *const *second_vtable;
    if (*reinterpret_cast<IdGetter>((first_vtable = static_cast<void *const *>(*source))[9])(source) == 0x03000015U) {
        reinterpret_cast<Target *>(object)->value_20 = 0;
    } else if (*reinterpret_cast<IdGetter>((second_vtable = static_cast<void *const *>(*source))[9])(source) == 0x03000016U) {
        reinterpret_cast<Target *>(object)->value_20 = 1;
    }
    return 0;
}
