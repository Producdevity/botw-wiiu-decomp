typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_037e5ec0(void*);

namespace {
struct Object {
    char padding_0[0x10];
    s32 state;
    char member[0x30];
};
}

extern "C" void *fn_037b9d80(void *memory) {
    Object *object = (Object *)memory;

    if (object != 0 || (object = (Object *)fn_0308e578(0x44U), object != 0)) {
        object->state = 0;
        fn_037e5ec0(object->member);
    }
    return object;
}
