extern "C" void fn_029d2ac0(void* object) {
    char* value = *(char**)((char*)object + 20);
    *(char**)(value) = *(char**)(value) + 1;
}
