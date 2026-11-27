typedef int s32;

namespace {
struct Pair {
    s32 *vtable;
    s32 first;
    s32 second;
};
}

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_1035d3dc;

extern "C" void fn_03a3b2f4(void *self, s32 first, s32 second) {
    Pair *object = (Pair *)self;
    if (object != 0 || (object = (Pair *)fn_0308e578(0xCU), object != 0)) {
        object->second = second;
        object->first = first;
        object->vtable = &data_1035d3dc;
    }
}
