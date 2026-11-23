extern "C" bool fn_02c05948(void* p, unsigned mask);

extern "C" bool fn_02c09d00(void* object, int value) {
    return fn_02c05948((char*)object + 4125, 4);
}
