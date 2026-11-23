extern "C" void fn_02268638(void* object);
extern "C" void fn_02266cc4(void* object, void* other);

extern "C" void fn_022686d4(void* object, void* other) {
    fn_02268638(object);
    *((signed char*)object + 0x38) = 0;
    fn_02266cc4(object, other);
}
