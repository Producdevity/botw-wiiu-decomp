typedef signed char s8;
typedef int s32;

namespace {
struct VirtualObject {
    char padding_0[0x1C];
    void **vtable;
};

struct Object {
    void *owner;
    char padding_4[0x88];
    s8 flag;
};
}

struct Owner;
extern "C" void* fn_02b62bc8(void*);

extern "C" void fn_026f2360(void *self) {
    Object *object = (Object *)self;
    VirtualObject *target = (VirtualObject *)fn_02b62bc8((struct Owner *)object->owner);
    s32 kind;
    if (target != 0 && ((kind = ((s32 (*)())target->vtable[17])(), kind == 0x1F) || kind == 0x1E)) {
        object->flag = 1;
    }
}
