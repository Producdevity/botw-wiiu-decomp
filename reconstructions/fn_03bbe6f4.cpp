extern "C" void* fn_03bbe6f4(void* object) {
    char* value = *(char**)((char*)object + 60);
    return value ? (*(char**)(value + 16)) : value;
}
