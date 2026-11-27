typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);

namespace {
struct Object {
    InferredObject *target;
    char padding_4[0x58];
    u8 flag;
};
}

extern "C" u8 fn_02cb6c80(void *arg0) {
    Object *object = (Object *)arg0;
    s32 result = 1;

    if (fn_02d82148(object->target) == 0 && object->flag == 0) {
        result = 0;
    }
    return result;
}
