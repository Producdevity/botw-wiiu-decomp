typedef int s32;

extern "C" void fn_022c4d7c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10067648;

namespace {
struct Object {
    unsigned char padding_0[0x5C];
    unsigned char member_5c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0226b3cc(void *object) {
    TypeRecord record;

    fn_022c4d7c(object);
    record.base = &data_10263910;
    record.type = &data_10067648;
    fn_030e9be0(object, ((Object *) object)->member_5c, &record.type);
}
