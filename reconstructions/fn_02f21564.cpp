typedef int s32;

struct InferredObject;
extern "C" bool fn_02eab1d4(const void*, unsigned int);

extern "C" struct InferredObject *data_10469900;

namespace {
struct Owner {
    char padding_0[0xEC];
    s32 value;
};
}

extern "C" s32 fn_02f21564(void *object) {
    s32 result;

    result = 0;
    if (fn_02eab1d4(data_10469900, 0U) != 0) {
        result = ((Owner *)object)->value != 0;
    }
    return result;
}
