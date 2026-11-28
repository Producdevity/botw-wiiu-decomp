typedef int s32;

struct ProcAccessor;
extern "C" void* fn_030e0414(const ProcAccessor *);
extern "C" void fn_030e9a28(void*, void*, void*, void*);

namespace {
struct Object {
    char padding_0[0x38];
    s32 *state;
};
}

extern "C" void fn_02183560(void *object, struct ProcAccessor *accessor) {
    s32 message;

    if (*((Object *) object)->state == 0) {
        message = 0x03000015;
        fn_030e9a28(object, fn_030e0414(accessor), &message, 0);
    }
}
