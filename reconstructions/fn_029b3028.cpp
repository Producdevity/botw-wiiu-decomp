typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_03485c18(const void *);

namespace {
struct Object {
    unsigned char padding_0[0x50];
    void *target;
};
}

extern "C" u8 fn_029b3028(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    void *target = object->target;
    s32 result = 1;
    if ((target != 0) && (fn_03485c18(target) != 0)) {
        result = 0;
    }
    return result;
}
