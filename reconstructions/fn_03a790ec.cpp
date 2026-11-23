extern "C" void fn_03a790ec(void* object, int value, int index) {
    *(unsigned char*)((char*)object + 4) = value;
    *(unsigned char*)((char*)object + 5) = index;
}
