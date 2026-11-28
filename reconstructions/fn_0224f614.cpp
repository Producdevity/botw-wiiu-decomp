typedef int s32;

extern "C" void fn_02232514(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100618a0;

namespace {
struct Object {
    unsigned char padding_0[0x40];
    unsigned char member_40[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0224f614(void *object) {
    TypeRecord record;

    fn_02232514(object);
    record.base = &data_10263910;
    record.type = &data_100618a0;
    fn_030e9aa8(object, ((Object *) object)->member_40, &record.type);
}
