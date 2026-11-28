typedef int s32;

extern "C" void fn_02133554(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1006ab08;

namespace {
struct Object {
    unsigned char padding_0[0xF4];
    unsigned char member_f4[1];
};

struct TypeRecord {
    const void *type;
    const void *base;
};
}

extern "C" void fn_0227aa58(void *object) {
    TypeRecord record;

    fn_02133554(object);
    record.base = &data_10263910;
    record.type = &data_1006ab08;
    fn_030e9be0(object, ((Object *) object)->member_f4, &record.type);
}
