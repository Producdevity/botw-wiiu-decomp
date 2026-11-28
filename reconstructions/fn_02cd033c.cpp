struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);

namespace {
struct Object {
    unsigned char padding_0[0x12A9];
    unsigned char enabled;
};
}

extern "C" unsigned char fn_02cd033c(struct InferredObject** handle) {
    int result;

    result = 0;
    if (fn_02d82148(*handle) != 0 && ((Object*)*handle)->enabled != 0) {
        result = 1;
    }
    return result;
}
