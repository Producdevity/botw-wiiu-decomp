extern "C" void fn_027478c8(void* a, void* b);

extern "C" bool fn_02747984(void* a, int* b) {
    if (*b == 3) {
        fn_027478c8(a, b);
        return true;
    }
    return false;
}
