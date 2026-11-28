extern "C" void fn_0221da14(void*);
extern "C" void fn_0221da90(void*);

extern "C" void fn_02202b04(char* self) {
    fn_0221da14(self);
    char* vtable = *(char**)(*(char**)(self + 0xC) + 0x104);
    typedef int (*Method)(void*);
    if (((Method)vtable)(self) != 0) {
        fn_0221da90(self);
    }
}
