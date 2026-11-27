typedef signed char s8;
typedef int s32;

extern "C" void* fn_037a7f44(void *, void *, const char *);

extern "C" s8 data_10153324;
extern "C" s32 data_1015332c;

namespace {
struct Owner {
    unsigned char padding_0[0xF4];
    s32 value;
};

struct Object {
    Owner *owner;
    unsigned char padding_4[0x24];
    s32 value;
    void *handle;
};
}

extern "C" s32 fn_028a1f68(void *arg0) {
    Owner *owner;
    Object *object = (Object *)arg0;

    owner = object->owner;
    object->value = owner->value;
    object->handle = fn_037a7f44(owner, &data_1015332c, (const char *)(&data_10153324));
    return 1;
}
