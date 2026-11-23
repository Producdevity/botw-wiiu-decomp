extern "C" void fn_02898520(void* object);
extern "C" int fn_02c19940(void* owner);

extern "C" void fn_0288ecec(void* object) {
    if (fn_02c19940(*(void**)object) != 0) {
        *((signed char*)object + 0x2C) = 1;
    }
    fn_02898520(object);
}
