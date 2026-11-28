typedef int s32;

extern "C" void fn_02254514(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100630e8;

namespace {
struct Object {
    unsigned char padding_0[0x100];
    unsigned char member_100[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_022572a4(void *object) {
    TypeRecord record;

    fn_02254514(object);
    record.base = &data_10263910;
    record.type = &data_100630e8;
    fn_030e9aa8(object, ((Object *) object)->member_100, &record.type);
}
