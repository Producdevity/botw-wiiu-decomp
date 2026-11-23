extern "C" void fn_03c25fa8(void* object, int value, int index) {
    *(unsigned char*)((char*)object + 340) = value;
    if (value) {
        *(unsigned short*)((char*)object + 354) = index;
    }
}
