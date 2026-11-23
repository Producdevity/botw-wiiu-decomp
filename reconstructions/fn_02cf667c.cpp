extern "C" void fn_02cf667c(void* object) {
    char* value = *(char**)object;
    *(int*)(value + 2112) = (*(int*)(value + 2112)) & 0xfff7ffff;
}
