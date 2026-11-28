typedef int s32;

extern "C" void fn_02306df8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10064ae8;

namespace {
struct Object {
    unsigned char padding_0[0x74];
    unsigned char member_74[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0225e21c(void *object) {
    TypeRecord record;

    fn_02306df8(object);
    record.base = &data_10263910;
    record.type = &data_10064ae8;
    fn_030e9be0(object, ((Object *) object)->member_74, &record.type);
}
