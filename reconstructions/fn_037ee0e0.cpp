typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_037d7204(const void*);

namespace {
struct Object {
    char padding_0[0xE0];
    InferredObject *first;
    char padding_e4[8];
    InferredObject *second;
};
}

extern "C" u8 fn_037ee0e0(void *object) {
    s32 result = 1;

    if (fn_037d7204(((Object *)object)->first) == 0 && fn_037d7204(((Object *)object)->second) == 0) {
        result = 0;
    }
    return result;
}
