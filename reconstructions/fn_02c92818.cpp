extern "C" void fn_02c92818(void* object) {
    char* value = *(char**)object;
    *(int*)(value + 2120) = (*(int*)(value + 2120)) & 0xffffbfff;
}
