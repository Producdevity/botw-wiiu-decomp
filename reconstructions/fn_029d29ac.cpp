extern "C" void fn_029d29ac(void* object) {
    char* value = *(char**)((char*)object + 20);
    *(char**)(value) = *(char**)(value) + 1;
}
