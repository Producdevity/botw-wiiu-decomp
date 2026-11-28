typedef int s32;
typedef unsigned int u32;

extern "C" int fn_0348d5d0(void*);
struct InferredObject;
extern "C" unsigned int fn_034a4004(const void*);

namespace {
struct Object {
    char padding_0[0x50];
    s32 flags;
    char padding_54[0x80 - 0x54];
    s32 resource;
};
}

extern "C" u32 fn_0348d6b0(void *object) {
    Object *self = (Object *)object;

    if ((self->flags & 1) && (self->resource != 0)) {
        s32 entry = fn_0348d5d0(self);
        if (entry != 0) {
            return fn_034a4004((struct InferredObject *)entry);
        }
    }
    return 0U;
}
