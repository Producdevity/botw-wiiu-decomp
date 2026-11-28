typedef int s32;

extern "C" void fn_0229a324(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006e0b8;

namespace {
struct Object {
    unsigned char padding_0[0x28];
    unsigned char member_28[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_02297e04(void *object) {
    TypeRecord record;

    fn_0229a324(object);
    record.base = &data_10263910;
    record.type = &data_1006e0b8;
    fn_030e9b44(object, ((Object *) object)->member_28, &record.type);
}
