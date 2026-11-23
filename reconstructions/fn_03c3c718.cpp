extern "C" void fn_03c3c718(void* object, int value, float x) {
    *(unsigned char*)((char*)object + 60) = value;
    *(float*)((char*)object + 56) = x;
}
