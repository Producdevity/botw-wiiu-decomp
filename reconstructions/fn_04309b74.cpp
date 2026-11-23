extern "C" void fn_04309b74(void* object, float x, float y) {
    char* value = *(char**)((char*)object + 172);
    *(float*)(value + 28) = x;
    *(float*)(value + 32) = y;
}
