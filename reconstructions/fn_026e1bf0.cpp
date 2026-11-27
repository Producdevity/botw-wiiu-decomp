typedef int s32;

namespace {
struct Object {
    void *owner;
    char padding_4[0x304];
    s32 handle;
    char list[1];
};
}

extern "C" void fn_025c6c00(void *);
extern "C" void fn_0294f828(void*, void*);
extern "C" void fn_034cc350(int);

extern "C" void fn_026e1bf0(void *self) {
    Object *object = (Object *)self;
    s32 handle = object->handle;
    if (handle != 0) {
        fn_034cc350(handle);
        object->handle = 0;
    }
    fn_0294f828(object->owner, object->list);
    fn_025c6c00(self);
}
