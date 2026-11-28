typedef int s32;

extern "C" void fn_0230b268(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006b1fc;

namespace {
struct Object {
    unsigned char padding_0[0x88];
    unsigned char member_88[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0227c494(void *object) {
    TypeRecord record;

    fn_0230b268(object);
    record.base = &data_10263910;
    record.type = &data_1006b1fc;
    fn_030e9b44(object, ((Object *) object)->member_88, &record.type);
}
