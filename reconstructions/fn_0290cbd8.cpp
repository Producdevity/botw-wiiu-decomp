typedef int s32;
typedef float f32;

extern "C" float fn_0290c7b8(void*);
extern "C" int fn_0290c890(void*);
extern "C" void fn_0290ca04(void*);
extern "C" void fn_0290cb30(void*);

namespace {
struct Object {
    char padding_0[0x30];
    f32 value_30;
    s32 value_34;
};
}

extern "C" void fn_0290cbd8(void *object) {
    ((Object *) object)->value_30 = fn_0290c7b8(object);
    ((Object *) object)->value_34 = fn_0290c890(object);
    fn_0290ca04(object);
    fn_0290cb30(object);
}
