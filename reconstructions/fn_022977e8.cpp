typedef int s32;

extern "C" void fn_0229ae48(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006df38;

namespace {
struct Object {
    unsigned char padding_0[0x54];
    unsigned char member_54[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_022977e8(void *object) {
    TypeRecord record;

    fn_0229ae48(object);
    record.base = &data_10263910;
    record.type = &data_1006df38;
    fn_030e9be0(object, ((Object *) object)->member_54, &record.type);
}
