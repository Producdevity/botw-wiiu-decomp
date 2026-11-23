extern "C" void fn_042a12f4(void* object, int value, int index, int count) {
    *(int*)object = index;
    *(int*)((char*)object + 4) = count;
}
