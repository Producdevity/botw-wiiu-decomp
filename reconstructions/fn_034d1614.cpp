extern "C" void *fn_0308e578(unsigned);
extern "C" void fn_034d1090(void *, void *, void *, void *);
extern "C" unsigned char data_102cd310[];

namespace {
struct Object {
    char padding_0[0x3C];
    const void *table;
    int value_40;
};
}

extern "C" void *fn_034d1614(void *self, void *first, void *second, void *third) {
    if (self != 0 || (self = fn_0308e578(0x44)) != 0) {
        fn_034d1090(self, first, second, third);
        ((Object *) self)->table = data_102cd310;
        ((Object *) self)->value_40 = 0;
    }
    return self;
}
