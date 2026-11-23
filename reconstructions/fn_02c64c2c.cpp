extern "C" void fn_02c64c2c(void* object) {
    char* value = *(char**)object;
    *(int*)(value + 2108) = (*(int*)(value + 2108)) & 0xfffff7ff;
}
