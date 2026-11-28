extern "C" unsigned fn_03bf65a0(void *);
extern "C" unsigned fn_03bf65a8(void *);
extern "C" void fn_0434ac38(void *, unsigned int);

namespace {
struct Object {
    char padding_0[0x20];
    unsigned int first_size;
    char padding_24[4];
    unsigned int second_size;
};
}

extern "C" void fn_03bf65b0(void *self) {
    Object *object = static_cast<Object *>(self);
    void *second;

    fn_0434ac38((void *)fn_03bf65a0(object), object->first_size);
    second = (void *)fn_03bf65a8(object);
    if (second != 0) {
        fn_0434ac38(second, object->second_size);
    }
}
