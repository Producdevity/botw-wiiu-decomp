typedef int s32;

namespace {
struct Object {
    char padding_0[0x14];
    void *const *vtable;
};
}

extern "C" s32 fn_02f4a4cc(void *object) {
    if (object == 0) {
        return 0;
    }
    ((s32 (*)())((Object *) object)->vtable[51])();
    return 1;
}
