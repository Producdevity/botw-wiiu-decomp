typedef int s32;

extern "C" void fn_0241c474(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10080dd0;

namespace {
struct Object {
    unsigned char padding_0[0x5C];
    unsigned char member_5c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0230a0a8(void *object) {
    TypeRecord record;

    fn_0241c474(object);
    record.base = &data_10263910;
    record.type = &data_10080dd0;
    fn_030e9aa8(object, ((Object *) object)->member_5c, &record.type);
}
