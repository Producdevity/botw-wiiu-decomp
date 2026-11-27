typedef int s32;

extern "C" void* fn_0308e5a0(unsigned, void *, int);
extern "C" void* fn_0312534c(void*);

namespace {
struct Object {
    unsigned char padding_0[0x18];
    void *component;
};
}

extern "C" s32 fn_023834fc(void *object_ptr, void *heap) {
    Object *object = (Object *)object_ptr;
    void *component = fn_0308e5a0(0x70U, heap, 4);
    if (component != 0) {
        component = fn_0312534c(component);
    }
    object->component = component;
    return 1;
}
