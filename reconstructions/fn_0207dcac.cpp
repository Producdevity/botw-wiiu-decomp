extern "C" void fn_02b50a38(unsigned char value, int id);
extern "C" void fn_030ea2cc(void* object);

extern "C" void fn_0207dcac(void* object) {
    fn_02b50a38(**(unsigned char**)((char*)object + 0x10), *(int*)object);
    *((unsigned char*)object + 0xB) |= 4;
    fn_030ea2cc(object);
}
