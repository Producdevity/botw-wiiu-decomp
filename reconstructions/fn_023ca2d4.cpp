typedef int s32;

extern "C" void fn_022d931c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a2280;

namespace {
struct Object {
    unsigned char padding_0[0x7C];
    unsigned char member_7c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_023ca2d4(void *object) {
    TypeRecord record;

    fn_022d931c(object);
    record.base = &data_10263910;
    record.type = &data_100a2280;
    fn_030e9aa8(object, ((Object *) object)->member_7c, &record.type);
}
