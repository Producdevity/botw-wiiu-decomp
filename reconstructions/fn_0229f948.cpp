typedef int s32;

extern "C" void fn_032d44e0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006fec8;

namespace {
struct Object {
    unsigned char padding_0[0x34];
    unsigned char member_34[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0229f948(void *object) {
    TypeRecord record;

    fn_032d44e0(object);
    record.base = &data_10263910;
    record.type = &data_1006fec8;
    fn_030e9be0(object, ((Object *) object)->member_34, &record.type);
}
