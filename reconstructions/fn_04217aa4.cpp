extern "C" void fn_04217de8(void*);
extern "C" void fn_04217dec(void*);
extern "C" void fn_042179fc(void*);
extern "C" void fn_04217a44(void*);

extern "C" void fn_04217aa4(void* self, unsigned flags) {
    fn_04217de8(self);
    if (flags & 1) {
        fn_042179fc(self);
    }
    if (flags & 2) {
        fn_04217a44(self);
    }
    fn_04217dec(self);
}
