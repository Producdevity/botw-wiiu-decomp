typedef int s32;

struct FieldOwner;
extern "C" void* fn_0314dae8(const FieldOwner *);
extern "C" int fn_033aafe8(void*, void*);

namespace {
struct Object {
    void *owner;
    unsigned char padding_4[0x2C];
    s32 fieldOwner;
    void *fields;
};
}

extern "C" void fn_02847630(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    s32 fieldOwner = fn_033aafe8(object->owner, 0);
    object->fieldOwner = fieldOwner;
    if (fieldOwner != 0) {
        object->fields = fn_0314dae8((struct FieldOwner *) fieldOwner);
    }
}
