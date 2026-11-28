typedef int s32;

extern "C" void fn_02297e04(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006ef14;

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

extern "C" void fn_0229ae48(void *object) {
    TypeRecord record;

    fn_02297e04(object);
    record.base = &data_10263910;
    record.type = &data_1006ef14;
    fn_030e9b44(object, ((Object *) object)->member_2c, &record.type);
}
