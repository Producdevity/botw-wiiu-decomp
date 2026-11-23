extern "C" void fn_03c06ecc(void*, int, int);

extern "C" void fn_03c07048(void* object, int value) {
    fn_03c06ecc((char*)object + 4, *(int*)object, value);
}
