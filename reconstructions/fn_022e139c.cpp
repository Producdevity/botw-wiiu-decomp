typedef int s32;

extern "C" void fn_022e2a7c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10079130;

namespace {
struct Object {
    unsigned char padding_0[0xD4];
    unsigned char member_d4[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_022e139c(void *object) {
    TypeRecord record;

    fn_022e2a7c(object);
    record.base = &data_10263910;
    record.type = &data_10079130;
    fn_030e9aa8(object, ((Object *) object)->member_d4, &record.type);
}
