extern "C" void fn_03ca2b04(void* object, int value, int index, int count) {
    *(unsigned char*)((char*)object + 1072) = index;
    *(unsigned char*)((char*)object + 1073) = count;
    *(unsigned char*)((char*)object + 1071) = value;
}
