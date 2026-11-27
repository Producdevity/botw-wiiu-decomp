typedef int s32;

extern "C" void fn_034583fc(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1016c37c;

namespace {
struct Object {
    unsigned char padding_0[0x88];
    void *component;
};
}

extern "C" void fn_0294212c(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    fn_037b8284(object, &data_1016c37c, 0);
    void *component = object->component;
    if (component != 0) {
        fn_034583fc(component);
    }
}
