extern "C" void* fn_037966a8(void* object);
extern "C" void fn_02b744a0(void* object, float value);

extern "C" void fn_020fc518(void* p) {
    void* object = fn_037966a8(*(void**)p);
    if (object)
        fn_02b744a0(object, **(float**)((char*)p + 20));
}
