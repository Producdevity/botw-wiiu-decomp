typedef int s32;

extern "C" void fn_0214e984(void*);
extern "C" void fn_030ea084(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007dfe8;

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

extern "C" void fn_0230035c(void *object) {
    TypeRecord record;

    fn_0214e984(object);
    record.base = &data_10263910;
    record.type = &data_1007dfe8;
    fn_030ea084(object, ((Object *) object)->member_4c, &record.type);
}
