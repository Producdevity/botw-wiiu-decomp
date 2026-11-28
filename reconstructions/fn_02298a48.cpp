extern "C" void fn_02296ad8(void*);
extern "C" void fn_02296854(void*, void*);

extern "C" void fn_02298a48(char* self) {
    fn_02296ad8(self);
    fn_02296854(self, *(void**)(self + 0x24));
}
