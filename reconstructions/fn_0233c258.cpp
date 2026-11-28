typedef int s32;

extern "C" void fn_0233aecc(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100888b0;

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

extern "C" void fn_0233c258(void *object) {
    TypeRecord record;

    fn_0233aecc(object);
    record.base = &data_10263910;
    record.type = &data_100888b0;
    fn_030e9b44(object, ((Object *) object)->member_2c, &record.type);
}
