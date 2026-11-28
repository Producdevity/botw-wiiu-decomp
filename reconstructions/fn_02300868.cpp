typedef int s32;

extern "C" void fn_022f9758(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007e1c4;

namespace {
struct Object {
    unsigned char padding_0[0x90];
    unsigned char member_90[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_02300868(void *object) {
    TypeRecord record;

    fn_022f9758(object);
    record.base = &data_10263910;
    record.type = &data_1007e1c4;
    fn_030e9aa8(object, ((Object *) object)->member_90, &record.type);
}
