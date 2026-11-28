typedef int s32;

extern "C" void fn_02229c50(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1005bf50;

namespace {
struct Object {
    unsigned char padding_0[0x28];
    unsigned char member_28[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0222a28c(void *object) {
    TypeRecord record;

    fn_02229c50(object);
    record.base = &data_10263910;
    record.type = &data_1005bf50;
    fn_030e9aa8(object, ((Object *) object)->member_28, &record.type);
}
