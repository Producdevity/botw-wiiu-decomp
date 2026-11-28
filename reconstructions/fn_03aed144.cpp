extern "C" void fn_03bf6b2c(void*);
extern "C" void fn_0308e6d0(void*);

extern "C" void fn_03aed144(char* self, unsigned flags) {
    if (self != 0) {
        fn_03bf6b2c(self + 0x44);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
