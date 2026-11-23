extern "C" void fn_027567a0(void* object);
extern "C" void fn_02596638(void* object, void* other);

extern "C" void fn_027568f4(void* object, void* other) {
    fn_027567a0(object);
    *((signed char*)object + 0x70) = 0;
    fn_02596638(object, other);
}
