typedef int s32;

extern "C" void fn_023bdcf8(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a40f4;

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

extern "C" void fn_023d8c6c(void *object) {
    TypeRecord record;

    fn_023bdcf8(object);
    record.base = &data_10263910;
    record.type = &data_100a40f4;
    fn_030e9b44(object, ((Object *) object)->member_f0, &record.type);
}
