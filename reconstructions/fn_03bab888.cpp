typedef int s32;

namespace {
struct Object {
    char padding_0[0x38];
    s32 *vtable;
};
}

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03bab818(void);

extern "C" s32 data_103c895c;

extern "C" void fn_03bab888(void *self) {
    Object *object = (Object *)self;
    if (object != 0 || (object = (Object *)fn_0308e578(0x3CU), object != 0)) {
        object->vtable = &data_103c895c;
        fn_03bab818();
    }
}
