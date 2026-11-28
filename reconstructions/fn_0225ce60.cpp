typedef int s32;

extern "C" void fn_020f422c(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100644b8;

namespace {
struct Object {
    unsigned char padding_0[0xD4];
    unsigned char member_d4[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0225ce60(void *object) {
    TypeRecord record;

    fn_020f422c(object);
    record.base = &data_10263910;
    record.type = &data_100644b8;
    fn_030e9b44(object, ((Object *) object)->member_d4, &record.type);
}
