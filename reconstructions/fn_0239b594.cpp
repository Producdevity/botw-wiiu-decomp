typedef int s32;

extern "C" void fn_02344994(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10098fd8;

namespace {
struct Object {
    unsigned char padding_0[0x24];
    unsigned char member_24[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0239b594(void *object) {
    TypeRecord record;

    fn_02344994(object);
    record.base = &data_10263910;
    record.type = &data_10098fd8;
    fn_030e9aa8(object, ((Object *) object)->member_24, &record.type);
}
