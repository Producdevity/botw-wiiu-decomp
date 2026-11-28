typedef int s32;

extern "C" void fn_0236801c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10065124;

namespace {
struct Object {
    unsigned char padding_0[0x6C];
    unsigned char member_6c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0225f038(void *object) {
    TypeRecord record;

    fn_0236801c(object);
    record.base = &data_10263910;
    record.type = &data_10065124;
    fn_030e9aa8(object, ((Object *) object)->member_6c, &record.type);
}
