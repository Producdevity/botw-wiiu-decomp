typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_04211384(void *, unsigned int);

namespace {
struct Object {
    s32 head;
    char tail[0x3C];
};
}

extern "C" s32 *fn_030deb34(s32 *memory) {
    Object *object = (Object *)memory;

    if (object != 0 || (object = (Object *)fn_0308e578(0x40U), object != 0)) {
        object->head = 0;
        fn_04211384(object->tail, 0x3CU);
    }
    return (s32 *)object;
}
