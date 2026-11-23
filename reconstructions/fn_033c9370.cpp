extern "C" void fn_033c9370(void* object, int value, int index) {
    *(unsigned char*)((char*)object + 1) = value;
    *(int*)((char*)object + 4) = index;
    *(unsigned char*)object = 1;
}
