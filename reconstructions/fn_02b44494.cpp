extern "C" void fn_02b43fe8(void*, void*);
extern "C" void fn_02b44224(void*);
extern "C" void fn_02b442b0(void*);
extern "C" void fn_02b443d4(void*);

extern "C" void fn_02b44494(void* object) {
    int value = 0xA;
    fn_02b43fe8(object, &value);
    fn_02b443d4(object);
    fn_02b44224(object);
    fn_02b442b0(object);
}
