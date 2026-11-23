extern "C" void fn_02637ae4(void* object) {
    char* value = *(char**)object;
    *(int*)(value + 868) = (*(int*)(value + 868)) & 0x7fffffff;
}
