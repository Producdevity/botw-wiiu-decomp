extern "C" void fn_02296ad8(void*);
extern "C" void fn_02950718(void*, void*);

extern "C" void fn_0229cc40(char* self) {
    fn_02296ad8(self);
    fn_02950718(*(void**)self, *(void**)(self + 0x24));
}
