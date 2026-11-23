extern "C" bool fn_03485c18(const void* object);

extern "C" bool fn_03449cb8(void* object) {
    return fn_03485c18(*(char**)((char*)object + 4));
}
