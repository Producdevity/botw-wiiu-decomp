typedef int s32;

extern "C" void fn_022da958(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a2438;

namespace {
struct Object {
    unsigned char padding_0[0x48];
    unsigned char member_48[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_023ca9ac(void *object) {
    TypeRecord record;

    fn_022da958(object);
    record.base = &data_10263910;
    record.type = &data_100a2438;
    fn_030e9aa8(object, ((Object *) object)->member_48, &record.type);
}
