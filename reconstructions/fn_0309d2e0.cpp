extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0309f8cc(void *);
extern "C" void fn_030a05e8(void *, void *);
extern "C" void fn_030a5ab4(void *, unsigned);
extern "C" unsigned char data_1025fef0[];
extern "C" unsigned char data_1025ff10[];
extern "C" unsigned char data_10260028[];

extern "C" void fn_0309d2e0(void *self, int flags) {
    if (self != 0) {
        *(const void **)((char *)self + 0x20) = data_10260028;
        if ((char *)self + 0x74 != 0) {
            unsigned char *table = data_1025fef0;
            *(unsigned char **)((char *)self + 0xC4) = table;
            *(unsigned char **)((char *)self + 0x9C) = data_1025ff10;
            fn_0309f8cc((char *)self + 0x74);
            fn_030a5ab4((char *)self + 0x90, 0);
        }
        fn_030a05e8(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
