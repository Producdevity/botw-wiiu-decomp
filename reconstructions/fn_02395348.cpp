extern "C" void fn_02b540a8(void*, void*);
extern "C" void fn_02b541ac(void*, int, int);

extern "C" void fn_02395348(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_02b540a8(temp_r31, (char *)arg0 + 0x64);
    fn_02b541ac(temp_r31, 1, 8);
}
