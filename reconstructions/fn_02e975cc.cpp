extern "C" void fn_02e91174(void*);
extern "C" void* fn_0308e578(unsigned size);
extern "C" unsigned char data_1021a778[];

namespace {
struct Object {
    char padding_0[0x3C];
    unsigned char *table;
    int value_40;
};
}

extern "C" void* fn_02e975cc(void* self)
{
    if (self != 0 || (self = fn_0308e578(0x44)) != 0) {
        fn_02e91174(self);
        ((Object *) self)->value_40 = 0;
        ((Object *) self)->table = data_1021a778;
    }
    return self;
}
