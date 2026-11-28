extern "C" void fn_02b3ba3c(void*, void*);
extern "C" void fn_032cbc00(void*);

extern "C" void fn_022edf10(char* self) {
    fn_02b3ba3c(self + 0x44, *(void**)self);
    fn_032cbc00(self);
}
