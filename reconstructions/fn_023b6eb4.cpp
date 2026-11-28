typedef float f32;

extern "C" void fn_023b6db4(void*);
extern "C" float fn_023b6e04(void*);
extern "C" float fn_023b6e6c(void*);
extern "C" void fn_0294f720(void *, int, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x54];
    char member[0x3C];
    f32 value_94;
    f32 value_98;
};
}

extern "C" void fn_023b6eb4(void *object) {
    fn_023b6db4(object);
    ((Object *) object)->value_94 = fn_023b6e04(object);
    ((Object *) object)->value_98 = fn_023b6e6c(object);
    fn_0294f720(((Object *) object)->owner, 4, ((Object *) object)->member);
}
