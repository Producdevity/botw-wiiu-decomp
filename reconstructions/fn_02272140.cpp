typedef int s32;

extern "C" void fn_022749f0(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100691f8;

namespace {
struct Object {
    unsigned char padding_0[0x4C];
    unsigned char member_4c[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_02272140(void *object) {
    TypeRecord record;

    fn_022749f0(object);
    record.base = &data_10263910;
    record.type = &data_100691f8;
    fn_030e9aa8(object, ((Object *) object)->member_4c, &record.type);
}
