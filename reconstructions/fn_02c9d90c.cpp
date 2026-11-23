extern "C" void fn_02c9d90c(void* object) {
    char* value = *(char**)object;
    *(int*)(value + 2112) = (*(int*)(value + 2112)) & 0xfffffffd;
}
