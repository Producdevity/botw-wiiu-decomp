extern "C" void fn_03ca2a68(void* object, int value, int index, int count) {
    *(unsigned char*)((char*)object + 1049) = index;
    *(unsigned char*)((char*)object + 1050) = count;
    *(unsigned char*)((char*)object + 1048) = value;
}
