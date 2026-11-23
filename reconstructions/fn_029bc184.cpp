extern "C" void fn_029bc184(void* object) {
    char* value = *(char**)((char*)object + 20);
    *(char**)(value) = *(char**)(value) + 1;
}
