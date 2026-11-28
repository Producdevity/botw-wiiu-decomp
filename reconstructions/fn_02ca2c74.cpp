typedef int s32;
typedef float f32;

typedef s32 (*VirtualFn)(void *);

namespace {
struct VTable {
    VirtualFn slots[528];
};

struct DispatchObject {
    unsigned char padding_0[0xE8];
    VTable *vtable;
};
}

extern "C" void fn_02cb89ec(void*);
extern "C" void fn_02d4b63c(void*, float);
extern "C" void fn_0335d74c(void);

extern "C" f32 data_101d2048;

extern "C" void fn_02ca2c74(void **owner) {
    fn_02cb89ec(owner);
    fn_02d4b63c(*owner, data_101d2048);
    DispatchObject *object = (DispatchObject *)*owner;
    object->vtable->slots[527](object);
    fn_0335d74c();
}
