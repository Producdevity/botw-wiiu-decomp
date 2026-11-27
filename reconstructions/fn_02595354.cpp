typedef unsigned char u8;
typedef int s32;

struct Base;
extern "C" const unsigned char* fn_0294e940(void*);

namespace {
struct Object {
    Base *base;
    char padding_4[8];
    void* const* vtable;
};
}

extern "C" void fn_02595354(void *object, s32 value) {
    Object *self;
    void* const* vtable;

    self = (Object *)object;
    vtable = self->vtable;
    ((s32 (*)(void *, u8 *, s32))vtable[79])(object, (u8 *)(fn_0294e940(self->base)), value);
}
