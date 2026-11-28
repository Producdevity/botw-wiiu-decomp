typedef int s32;

extern "C" void fn_023e8e14(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a6ac8;

namespace {
struct Object {
    unsigned char padding_0[0x80];
    unsigned char member_80[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_023e8ac8(void *object) {
    TypeRecord record;

    fn_023e8e14(object);
    record.base = &data_10263910;
    record.type = &data_100a6ac8;
    fn_030e9aa8(object, ((Object *) object)->member_80, &record.type);
}
