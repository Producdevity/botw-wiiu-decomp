typedef int s32;

extern "C" void fn_023d76dc(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a3f24;

namespace {
struct Object {
    unsigned char padding_0[0x98];
    unsigned char member_98[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_023d8684(void *object) {
    TypeRecord record;

    fn_023d76dc(object);
    record.base = &data_10263910;
    record.type = &data_100a3f24;
    fn_030e9b44(object, ((Object *) object)->member_98, &record.type);
}
