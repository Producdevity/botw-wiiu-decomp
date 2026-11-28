typedef int s32;

extern "C" void fn_023d4dc4(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a34d0;

namespace {
struct Object {
    unsigned char padding_0[0x8C];
    unsigned char member_8c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_023d26d4(void *object) {
    TypeRecord record;

    fn_023d4dc4(object);
    record.base = &data_10263910;
    record.type = &data_100a34d0;
    fn_030e9b44(object, ((Object *) object)->member_8c, &record.type);
}
