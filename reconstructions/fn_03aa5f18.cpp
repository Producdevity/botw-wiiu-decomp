extern "C" void fn_03aa56a4(void* object);
extern "C" void fn_03aa5e34(void* object);
extern "C" void fn_03abc33c(void* object, int flag);

extern "C" void fn_03aa5f18(void* p) {
    char* self = (char*)p;
    fn_03aa56a4(self + 32);
    fn_03aa5e34(self + 32);
    fn_03abc33c(p, 0);
}
