typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_03485c18(const void *);

namespace {
struct Object {
    unsigned char padding_0[0x68];
    void *target;
};
}

extern "C" u8 fn_02086304(void *arg0) {
    s32 result;
    void *target;
    Object *object = (Object *)arg0;

    target = object->target;
    result = 1;
    if ((target != 0) && (fn_03485c18(target) != 0)) {
        result = 0;
    }
    return result;
}
