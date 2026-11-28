extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03bc7afc(void*);
extern "C" unsigned char data_103cdf9c[];

namespace {
struct Object {
    unsigned char *table;
    char padding_4[0x18];
    int value_1c;
};
}

extern "C" void* fn_03bc7d0c(void* self)
{
    if (self != 0 || (self = fn_0308e578(0x20)) != 0) {
        fn_03bc7afc(self);
        ((Object *) self)->value_1c = 0;
        ((Object *) self)->table = data_103cdf9c;
    }
    return self;
}
