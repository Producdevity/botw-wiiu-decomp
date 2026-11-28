typedef int s32;

extern "C" void fn_023ba02c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007565c;

namespace {
struct Object {
    unsigned char padding_0[0x1C];
    unsigned char member_1c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_022c587c(void *object) {
    TypeRecord record;

    fn_023ba02c(object);
    record.base = &data_10263910;
    record.type = &data_1007565c;
    fn_030e9aa8(object, ((Object *) object)->member_1c, &record.type);
}
