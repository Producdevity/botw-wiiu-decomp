extern "C" void fn_03b687a0(void* object, int value, int index, int count) {
    *(int*)((char*)object + 4) = index;
    *(int*)object = count;
    *(int*)((char*)object + 8) = value;
}
