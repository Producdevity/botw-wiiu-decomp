extern "C" void fn_03ae4b9c(void* object, float x) {
    char* value = *(char**)((char*)object + 412);
    if (value) {
        *(float*)(value + 184) = x;
    }
}
