typedef int s32;

extern "C" void fn_02134bec(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10064078;

namespace {
struct Object {
    unsigned char padding_0[0x64];
    unsigned char member_64[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0225a1f4(void *object) {
    TypeRecord record;

    fn_02134bec(object);
    record.base = &data_10263910;
    record.type = &data_10064078;
    fn_030e9c7c(object, ((Object *) object)->member_64, &record.type);
}
