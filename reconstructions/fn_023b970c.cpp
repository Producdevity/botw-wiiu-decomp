typedef int s32;

extern "C" void fn_023b9244(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1009f738;

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

extern "C" void fn_023b970c(void *object) {
    TypeRecord record;

    fn_023b9244(object);
    record.base = &data_10263910;
    record.type = &data_1009f738;
    fn_030e9aa8(object, ((Object *) object)->member_28, &record.type);
}
