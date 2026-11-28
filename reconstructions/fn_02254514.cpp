typedef int s32;

extern "C" void fn_02255ebc(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10062b68;

namespace {
struct Object {
    unsigned char padding_0[0xF0];
    unsigned char member_f0[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_02254514(void *object) {
    TypeRecord record;

    fn_02255ebc(object);
    record.base = &data_10263910;
    record.type = &data_10062b68;
    fn_030e9be0(object, ((Object *) object)->member_f0, &record.type);
}
