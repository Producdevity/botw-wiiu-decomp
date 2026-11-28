typedef int s32;

extern "C" void fn_0243800c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007a608;

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

extern "C" void fn_022e8ff0(void *object) {
    TypeRecord record;

    fn_0243800c(object);
    record.base = &data_10263910;
    record.type = &data_1007a608;
    fn_030e9aa8(object, ((Object *) object)->member_60, &record.type);
}
