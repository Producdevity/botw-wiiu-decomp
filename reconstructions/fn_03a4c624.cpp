extern "C" void *fn_0308e578(unsigned);
extern "C" void fn_03a36144(void *, void *, void *, void *);
extern "C" unsigned char data_1035e9b4[];

extern "C" void *fn_03a4c624(void *self, void *arg1, void *arg2, void *arg3) {
    if (self != 0 || (self = fn_0308e578(0xE0)) != 0) {
        fn_03a36144(self, arg1, arg2, arg3);
        *(const void **)((char *)self + 8) = data_1035e9b4;
        *(int *)((char *)self + 0xD8) = 0;
        *(char *)((char *)self + 0xDC) = 0;
    }
    return self;
}
