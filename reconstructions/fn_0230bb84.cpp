typedef int s32;

extern "C" void fn_020ec0a8(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10081778;

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

extern "C" void fn_0230bb84(void *object) {
    TypeRecord record;

    fn_020ec0a8(object);
    record.base = &data_10263910;
    record.type = &data_10081778;
    fn_030e9b44(object, ((Object *) object)->member_4c, &record.type);
}
