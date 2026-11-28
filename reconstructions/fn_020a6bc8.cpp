typedef int s32;
extern "C" int fn_020a6b00(void*, void*);

namespace {
struct Object {
    char padding_0[0x7F8];
    void *value_7f8;
    char padding_7fc[0x37C];
    s32 flags;
};
}

extern "C" void fn_020a6bc8(void *object) {
    if (fn_020a6b00(object, ((Object *) object)->value_7f8) != 0) {
        ((Object *) object)->flags |= 8;
    }
}
