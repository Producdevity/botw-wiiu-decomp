extern "C" void fn_02674034(void* a, void* b);

extern "C" bool fn_026740e8(void* a, int* b) {
    if (*b == 3) {
        fn_02674034(a, b);
        return true;
    }
    return false;
}
