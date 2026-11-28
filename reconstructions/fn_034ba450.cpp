namespace {
struct Object {
    const void *table_0;
    const void *table_4;
};
}

extern "C" void *fn_0308e578(unsigned);
extern "C" void fn_034d7d84(void *, void *, int, void *);
extern "C" unsigned char data_102cc268[];
extern "C" unsigned char data_102cc2e8[];

extern "C" void *fn_034ba450(void *self, int first, int second) {
    if (self != 0 || (self = fn_0308e578(0x70)) != 0) {
        fn_034d7d84(self, (void *)first, 0, (void *)second);
        ((Object *)self)->table_0 = data_102cc268;
        ((Object *)self)->table_4 = data_102cc2e8;
    }
    return self;
}
