typedef unsigned char u8;
typedef int s32;

struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);

namespace {
struct ObjectView {
    unsigned char padding_0[0x12A9];
    u8 enabled;
};
}

extern "C" u8 fn_02cd033c(struct InferredObject **arg0) {
    s32 result;

    result = 0;
    if ((fn_02d82148(*arg0) != 0) && (((ObjectView *)*arg0)->enabled != 0)) {
        result = 1;
    }
    return result;
}
