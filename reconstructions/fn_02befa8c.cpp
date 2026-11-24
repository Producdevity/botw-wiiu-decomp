extern "C" void fn_02befa70(void* p);
extern "C" void fn_02befa7c(unsigned char* object, unsigned int bits);

extern "C" void fn_02befa8c(void* self, int value) {
    unsigned char* state = (unsigned char*)self + 0x13c;
    fn_02befa70(state);
    fn_02befa7c(state, 1);
    void** vtable = *(void***)((char*)self + 0xc);
    ((void (*)(void*, int))vtable[0x154 / 4])(self, value);
}
