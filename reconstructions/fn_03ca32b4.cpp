extern "C" void fn_03ca1dd0(void*);
extern "C" void fn_0434bda8(void*, void*);

namespace {
struct Object {
    unsigned char padding_0[0x408];
    void *source;
};
}

extern "C" int fn_03ca32b4(void *self, void *destination) {
    void *source;
    Object *object = static_cast<Object *>(self);

    source = object->source;
    if (source != 0) {
        fn_0434bda8(destination, source);
    }
    fn_03ca1dd0(object);
    return 0;
}
