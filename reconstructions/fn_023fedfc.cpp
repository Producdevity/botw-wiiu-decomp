typedef int s32;
typedef float f32;

extern "C" void fn_023415f4(void*);
extern "C" float fn_02950a18(void*);
extern "C" float fn_02950a5c(void*);

namespace {
struct Object {
    void *owner;
    char padding_4[0x30];
    s32 value_34;
    f32 value_38;
    f32 value_3c;
};
}

extern "C" void fn_023fedfc(void *object) {
    fn_023415f4(object);
    ((Object *) object)->value_38 = fn_02950a18(((Object *) object)->owner);
    ((Object *) object)->value_3c = fn_02950a5c(((Object *) object)->owner);
    ((Object *) object)->value_34 = 0;
}
