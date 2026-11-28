extern "C" void fn_02d6b514(void* owner);
extern "C" int fn_02d8e888(void* owner);
extern "C" void fn_02ddfcbc(void* owner);
extern "C" void fn_037945e8(void* object, float* value, float scale);
extern "C" float data_101cb9b4;

namespace {
struct Owner {
    char padding_0[0x12B8];
    float scale;
};

struct Class {
    char padding_0[0x104];
    void (*method)(void*);
};

struct Object {
    void *owner;
    char padding_4[8];
    Class *klass;
};
}

extern "C" void fn_02c773a4(void* object) {
    float value;
    void* owner;

    if (fn_02d8e888(((Object *)object)->owner) == 0) {
        fn_02ddfcbc(((Object *)object)->owner);
    }
    owner = ((Object *)object)->owner;
    value = data_101cb9b4;
    fn_037945e8((char*)owner + 0x1AE4, &value, ((Owner *)owner)->scale);
    ((Object *)object)->klass->method(object);
    fn_02d6b514(((Object *)object)->owner);
}
