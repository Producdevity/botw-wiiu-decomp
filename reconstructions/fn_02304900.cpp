typedef int s32;

extern "C" void fn_023041d0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007ef28;

namespace {
struct Object {
    unsigned char padding_0[0x150];
    unsigned char member_150[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_02304900(void *object) {
    TypeRecord record;

    fn_023041d0(object);
    record.base = &data_10263910;
    record.type = &data_1007ef28;
    fn_030e9be0(object, ((Object *) object)->member_150, &record.type);
}
