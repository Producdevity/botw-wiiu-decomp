typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_02a10068(const void*);
extern "C" bool fn_0378da88(void *);

namespace {
struct ObjectView {
    unsigned char padding_0[0x284];
    unsigned char handle[4];
};
}

extern "C" u8 fn_02a10218(struct InferredObject *object) {
    s32 result = 0;
    if ((fn_0378da88(((ObjectView *)object)->handle) != 0) && (fn_02a10068(object) == 0)) {
        result = 1;
    }
    return result;
}
