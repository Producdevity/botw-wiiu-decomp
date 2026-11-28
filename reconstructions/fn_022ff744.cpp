typedef int s32;

extern "C" void fn_022ffbac(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1007dcc8;

namespace {
struct Object {
    unsigned char padding_0[0x24];
    unsigned char member_24[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_022ff744(void *object) {
    TypeRecord record;

    fn_022ffbac(object);
    record.base = &data_10263910;
    record.type = &data_1007dcc8;
    fn_030ea03c(object, ((Object *) object)->member_24, &record.type);
}
