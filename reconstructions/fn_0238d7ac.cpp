typedef int s32;

extern "C" void fn_020eb244(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10096748;

namespace {
struct Object {
    unsigned char padding_0[0x4C];
    unsigned char member_4c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0238d7ac(void *object) {
    TypeRecord record;

    fn_020eb244(object);
    record.base = &data_10263910;
    record.type = &data_10096748;
    fn_030e9be0(object, ((Object *) object)->member_4c, &record.type);
}
