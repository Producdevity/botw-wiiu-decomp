extern "C" void fn_042a12e8(void* object, int value, int index, int count) {
    *(int*)((char*)object + 8) = index;
    *(int*)((char*)object + 12) = count;
}
