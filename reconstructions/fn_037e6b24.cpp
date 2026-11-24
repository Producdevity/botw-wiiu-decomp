extern "C" void fn_037e5f5c(void* p, const void* q);
extern "C" unsigned fn_037e6208(void* p);
extern "C" void fn_037e6568(void* p);

extern "C" void fn_037e6b24(void* self) {
    if (fn_037e6208(self) == 7) {
        unsigned state = 4;
        fn_037e5f5c(self, &state);
    }
    fn_037e6568(self);
}
