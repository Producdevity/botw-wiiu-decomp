extern "C" void *fn_0308e578(unsigned);
extern "C" void fn_034d1090(void *, void *, void *, void *);
extern "C" unsigned char data_102cd310[];

extern "C" void *fn_034d1614(void *self, void *arg1, void *arg2, void *arg3) {
    if (self != 0 || (self = fn_0308e578(0x44)) != 0) {
        fn_034d1090(self, arg1, arg2, arg3);
        *(const void **)((char *)self + 0x3C) = data_102cd310;
        *(int *)((char *)self + 0x40) = 0;
    }
    return self;
}
