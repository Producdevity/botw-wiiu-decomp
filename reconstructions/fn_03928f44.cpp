extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_039298f4(void*);

extern "C" int data_10339a10;

namespace {
struct Object {
    unsigned char padding_0[0x20];
    int* vtable;
    int first;
    int second;
};
}

extern "C" void *fn_03928f44(void *arg0)
{
    Object* self = (Object*) arg0;
    if (self == 0) {
        self = (Object*) fn_0308e578(0x2C);
    }
    if (self != 0) {
        fn_039298f4(self);
        self->vtable = &data_10339a10;
        self->first = 0;
        self->second = 0;
    }
    return self;
}
