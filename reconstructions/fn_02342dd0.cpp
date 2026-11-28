typedef int s32;

extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1008a0a4;

namespace {
struct Object {
    unsigned char padding_0[0x18];
    unsigned char member_18[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_02342dd0(void *object) {
    TypeRecord record;

    fn_0221da1c(object);
    record.base = &data_10263910;
    record.type = &data_1008a0a4;
    fn_030e9d18(object, ((Object *) object)->member_18, &record.type);
}
