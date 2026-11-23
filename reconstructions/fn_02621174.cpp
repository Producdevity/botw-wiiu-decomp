extern "C" void fn_026210b8(void* a, void* b);

extern "C" bool fn_02621174(void* a, int* b) {
    if (*b == 3) {
        fn_026210b8(a, b);
        return true;
    }
    return false;
}
