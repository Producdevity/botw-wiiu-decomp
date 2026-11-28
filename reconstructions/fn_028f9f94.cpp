typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0317f700(void*, int);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1015e498;

namespace {
struct Type {
    char padding_0[0x38C];
    void *resource;
};

struct Object {
    Type *type;
    char padding_4[0x71 - 4];
    u8 enabled;
};
}

extern "C" void fn_028f9f94(void *object) {
    Object *self = (Object *)object;

    if (self->enabled != 0) {
        void *resource = self->type->resource;
        if (resource != 0) {
            fn_0317f700(resource, 0);
        }
    }
    fn_037b8284(object, &data_1015e498, 0);
}
