extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_0369fff8(void*);
extern "C" unsigned char data_103048cc[];

namespace {
struct Object {
    char padding_0[0x10];
    unsigned char *table;
    int value_14;
};
}

extern "C" void* fn_036a0504(void* self)
{
    void* object = self;
    if (object != 0 || (object = fn_0308e578(0x18)) != 0) {
        fn_0369fff8(object);
        ((Object *)object)->table = data_103048cc;
        ((Object *)object)->value_14 = 10;
    }
    return object;
}
