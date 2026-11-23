extern "C" void fn_039e4034(void* object, int value, int index) {
    *(int*)object = value;
    *(int*)((char*)object + 4) = index;
}
