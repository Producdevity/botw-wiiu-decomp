typedef int s32;
typedef float f32;

extern "C" void fn_0339bd70(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_101267b4;
extern "C" s32 data_101267b8;

namespace {
struct Object {
    void *owner;
    char padding_4[0x4C];
    f32 value_50;
};
}

extern "C" void fn_0275ec00(void *object) {
    fn_0339bd70(((Object *) object)->owner);
    ((Object *) object)->value_50 = data_101267b4;
    fn_037b8284(object, &data_101267b8, 0);
}
