extern "C" void* fn_02e5b564();

namespace {
struct Source {
    unsigned char padding_0[0x204];
    float a0;
    unsigned char padding_208[0xC];
    float a1;
    unsigned char padding_218[0xC];
    float a2;
    unsigned char padding_228[0x2BC - 0x228];
    float b0;
    float b1;
    float b2;
};

struct Object {
    unsigned char padding_0[0x28];
    float values[6];
};
}

extern "C" void fn_02befe5c(void* object_ptr) {
    Object *object = (Object *)object_ptr;
    Source *source = (Source *)fn_02e5b564();
    if (source != 0) {
        object->values[0] = source->a0;
        object->values[1] = source->a1;
        object->values[2] = source->a2;
        object->values[3] = source->b0;
        object->values[4] = source->b1;
        object->values[5] = source->b2;
    }
}
