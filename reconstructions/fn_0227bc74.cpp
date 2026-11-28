typedef int s32;

extern "C" void fn_023fea2c(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006b058;

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

extern "C" void fn_0227bc74(void *object) {
    TypeRecord record;

    fn_023fea2c(object);
    record.base = &data_10263910;
    record.type = &data_1006b058;
    fn_030e9b44(object, ((Object *) object)->member_18, &record.type);
}
