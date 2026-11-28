extern "C" void *fn_0308e578(unsigned);
extern "C" void fn_034d7d84(void *, void *, int, void *);
extern "C" unsigned char data_10333a48[];
extern "C" unsigned char data_10333ac8[];

namespace {
struct Object {
    const void *first_vtable;
    const void *second_vtable;
};
}

extern "C" void *fn_038dbfbc(void *self, int first, int second) {
    if (self != 0 || (self = fn_0308e578(0x70)) != 0) {
        fn_034d7d84(self, (void *)first, 1, (void *)second);
        static_cast<Object *>(self)->first_vtable = data_10333a48;
        static_cast<Object *>(self)->second_vtable = data_10333ac8;
    }
    return self;
}
