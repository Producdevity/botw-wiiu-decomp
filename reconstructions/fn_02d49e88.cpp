extern "C" void fn_02d49e88(void* object, float x) {
    char* value = *(char**)((char*)object + 48);
    if (value) {
        *(float*)(value + 4900) = x;
    }
}
