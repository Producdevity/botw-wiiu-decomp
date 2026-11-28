typedef signed char s8;
typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030de9e8(void*, void*, void*, void*);

extern "C" s32 data_102fd2b4;

namespace {
struct Object {
    s8 kind;
    char padding_1[3];
    s32 counter;
    char member[0x34];
    s32 *vtable;
};
}

extern "C" void *fn_03626e60(void *memory, void *first, void *second, s8 kind) {
    Object *object = (Object *)memory;

    if ((object != 0) || (object = (Object *)fn_0308e578(0x40U), ((object == 0) == 0))) {
        object->kind = kind;
        s32 *counter = &object->counter;
        object->vtable = &data_102fd2b4;
        if ((counter != 0) || (counter = (s32 *)(fn_0308e578(4U)), ((counter == 0) == 0))) {
            *counter = 0;
        }
        fn_030de9e8(object->member, first, second, (void *)kind);
    }
    return object;
}
