typedef signed char s8;
typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_10213790;

namespace {
struct FlaggedObject {
    s32* vtable;
    s8 enabled;
};
}

extern "C" void fn_02e336f4(void *memory) {
    FlaggedObject *object = (FlaggedObject *)memory;

    if ((object != 0) || (object = (FlaggedObject *)fn_0308e578(8U), ((object == 0) == 0))) {
        object->enabled = 1;
        object->vtable = &data_10213790;
    }
}
