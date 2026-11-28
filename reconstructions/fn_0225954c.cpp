typedef int s32;

extern "C" void fn_020f464c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10063cb4;

namespace {
struct Object {
    unsigned char padding_0[0x78];
    unsigned char member_78[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0225954c(void *object) {
    TypeRecord record;

    fn_020f464c(object);
    record.base = &data_10263910;
    record.type = &data_10063cb4;
    fn_030e9be0(object, ((Object *) object)->member_78, &record.type);
}
