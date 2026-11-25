extern "C" void *fn_0308e578(unsigned);
extern "C" void fn_034d7d84(void *, void *, int, void *);
extern "C" unsigned char data_102cc268[];
extern "C" unsigned char data_102cc2e8[];

extern "C" void *fn_034ba450(void *self, int arg1, int arg2) {
    if (self != 0 || (self = fn_0308e578(0x70)) != 0) {
        fn_034d7d84(self, (void *)arg1, 0, (void *)arg2);
        *(const void **)((char *)self + 0) = data_102cc268;
        *(const void **)((char *)self + 4) = data_102cc2e8;
    }
    return self;
}
