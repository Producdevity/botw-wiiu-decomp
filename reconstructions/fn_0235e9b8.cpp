typedef int s32;

extern "C" void fn_02118ee8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1008ee00;

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

extern "C" void fn_0235e9b8(void *object) {
    TypeRecord record;

    fn_02118ee8(object);
    record.base = &data_10263910;
    record.type = &data_1008ee00;
    fn_030e9be0(object, ((Object *) object)->member_8c, &record.type);
}
