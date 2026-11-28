typedef int s32;

extern "C" void fn_023ba6f0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100693cc;

namespace {
struct Object {
    unsigned char padding_0[0x2C];
    unsigned char member_2c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_022732a8(void *object) {
    TypeRecord record;

    fn_023ba6f0(object);
    record.base = &data_10263910;
    record.type = &data_100693cc;
    fn_030e9b44(object, ((Object *) object)->member_2c, &record.type);
}
