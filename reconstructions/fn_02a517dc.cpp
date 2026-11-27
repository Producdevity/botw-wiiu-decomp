typedef int s32;

namespace {
struct Object {
    char padding_0[0xC];
    void* const* vtable;
};
}

extern "C" s32 fn_02a517dc(void *object) {
    s32 result;

    result = 0;
    if (((s32 (*)())((Object *)object)->vtable[27])() != 0) {
        result = 1;
    }
    return result;
}
