typedef int s32;

extern "C" void fn_02257db8(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100637e4;

namespace {
struct Object {
    unsigned char padding_0[0x38];
    unsigned char member_38[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_022587dc(void *object) {
    TypeRecord record;

    fn_02257db8(object);
    record.base = &data_10263910;
    record.type = &data_100637e4;
    fn_030e9b44(object, ((Object *) object)->member_38, &record.type);
}
