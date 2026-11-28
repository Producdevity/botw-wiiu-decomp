typedef int s32;

extern "C" void fn_027b8bcc(void*);
extern "C" void fn_02b565d0(void*, void*, int);
extern "C" void fn_037b8798(void*, void*, int, int, void*);

extern "C" s32 data_10132884;

namespace {
struct Object {
    void* owner;
    unsigned char padding_4[0x19C];
    unsigned char member_1a0;
    unsigned char padding_1a1[0xAB];
    signed char value_24c;
};
}

extern "C" void fn_027cbc60(void *self) {
    Object *object = (Object *)self;
    fn_027b8bcc(object);
    fn_02b565d0(&object->member_1a0, object->owner, 1);
    object->value_24c = 0;
    fn_037b8798(object, &data_10132884, 1, 3, 0);
}
