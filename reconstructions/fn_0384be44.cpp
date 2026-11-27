typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void* fn_0378c550(void *);

namespace {
struct Object {
    s32 first;
    char record[8];
    s32 last;
};
}

extern "C" void *fn_0384be44(void *memory) {
    Object *object = (Object *)memory;

    if ((object != 0) || (object = (Object *)fn_0308e578(0x10U), ((object == 0) == 0))) {
        object->first = 0;
        fn_0378c550(object->record);
        object->last = 0;
    }
    return object;
}
