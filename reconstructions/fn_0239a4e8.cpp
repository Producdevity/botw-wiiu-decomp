typedef int s32;

extern "C" void fn_0239a238(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10098c40;

namespace {
struct Object {
    unsigned char padding_0[0x14];
    unsigned char member_14[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0239a4e8(void *object) {
    TypeRecord record;

    fn_0239a238(object);
    record.base = &data_10263910;
    record.type = &data_10098c40;
    fn_030e9b44(object, ((Object *) object)->member_14, &record.type);
}
