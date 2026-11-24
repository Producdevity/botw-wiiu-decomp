extern "C" void fn_030bb668(void* state);
extern "C" void fn_030bb69c(void* state);
extern "C" void fn_0378da14(void* handle);

extern "C" void fn_032bd490(int address) {
    unsigned char* self = reinterpret_cast<unsigned char*>(address);
    void* state = self + 0x24;
    fn_030bb668(state);
    fn_0378da14(self);
    fn_030bb69c(state);
}
