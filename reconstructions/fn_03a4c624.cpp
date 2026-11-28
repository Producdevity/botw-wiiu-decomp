extern "C" void *fn_0308e578(unsigned);
extern "C" void* fn_03a36144(void *, void *, void *, void *);
extern "C" unsigned char data_1035e9b4[];

namespace {
struct Object {
    char padding_0[8];
    const void *table;
    char padding_c[0xCC];
    int value_d8;
    char flag_dc;
};
}

extern "C" void *fn_03a4c624(void *self, void *first, void *second, void *third) {
    if (self != 0 || (self = fn_0308e578(0xE0)) != 0) {
        fn_03a36144(self, first, second, third);
        ((Object *) self)->table = data_1035e9b4;
        ((Object *) self)->value_d8 = 0;
        ((Object *) self)->flag_dc = 0;
    }
    return self;
}
