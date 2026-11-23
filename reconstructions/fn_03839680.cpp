extern "C" void* fn_03839680(void* object) {
    char* value = *(char**)((char*)object + 4);
    return value ? (*(char**)(value)) : value;
}
