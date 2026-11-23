extern "C" void fn_03b9b334(void* object, int value) {
    char* second = *(char**)((char*)object + 68);
    if (second) {
        *(int*)(second + 19588) = value;
    }
}
