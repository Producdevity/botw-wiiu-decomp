extern "C" void fn_029f5020(void* object, void* other) {
    int value = *(int*)object;
    *(unsigned char*)((char*)other + 40) = 1;
    *(int*)((char*)other + 32) = value;
}
