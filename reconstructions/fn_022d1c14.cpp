typedef signed char s8;

namespace {
struct Object {
    void *owner;
    char padding_4[0xA0];
    s8 flag;
};
}

extern "C" void fn_022d11f8(void*);
extern "C" void fn_0344afc8(void*, void*);
extern "C" void* fn_037966a8(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_022d1c14(void *self) {
    Object *object = (Object *)self;
    fn_022d11f8(self);
    void *target = fn_037966a8(object->owner);
    if (target != 0) {
        fn_0344afc8(target, (void *)data_10549dd0);
    }
    object->flag = 0;
}
