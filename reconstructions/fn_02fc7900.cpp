typedef int s32;

extern "C" void fn_02f27760(void*);
extern "C" void* fn_0308e578(unsigned);

namespace {
struct Object {
    char padding_0[0x54];
    s32 first;
    s32 second;
};
}

extern "C" void *fn_02fc7900(void *memory) {
    Object *object = (Object *)memory;

    if ((object != 0) || (object = (Object *)fn_0308e578(0x5CU), ((object == 0) == 0))) {
        fn_02f27760(object);
        object->first = 0;
        object->second = -1;
    }
    return object;
}
