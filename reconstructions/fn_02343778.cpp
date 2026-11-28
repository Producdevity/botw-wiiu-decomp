typedef int s32;

extern "C" void fn_023432e4(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1008a38c;

namespace {
struct Object {
    unsigned char padding_0[0x60];
    unsigned char member_60[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_02343778(void *object) {
    TypeRecord record;

    fn_023432e4(object);
    record.base = &data_10263910;
    record.type = &data_1008a38c;
    fn_030e9b44(object, ((Object *) object)->member_60, &record.type);
}
