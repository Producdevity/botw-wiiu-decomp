typedef int s32;

namespace {
struct Object {
    char padding_0[0xE8];
    void* const* vtable;
};
}

extern "C" s32 fn_02009128(void *object) {
    s32 result;

    result = 2;
    if (((s32 (*)())((Object *)object)->vtable[349])() != 0) {
        result = 1;
    }
    return result;
}
