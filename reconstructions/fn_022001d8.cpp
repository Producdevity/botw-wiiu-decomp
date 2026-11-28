typedef unsigned char u8;

extern "C" void* fn_031271f0(void *, const void *);
extern "C" unsigned char data_1057f3c4[];

namespace {
struct Type {
    char padding_0[0xE8];
    void *const *vtable;
};

struct Object {
    Type *type;
    char padding_4[0x30 - 4];
    char member[1];
};
}

extern "C" u8 *fn_022001d8(void **object) {
    Object *self = (Object *)object;
    Type *type = self->type;
    void *source = ((void *(*)(void *))type->vtable[203])(type);
    u8 *result = data_1057f3c4;

    if (source != 0) {
        result = (u8 *)fn_031271f0(source, self->member);
    }
    return result;
}
