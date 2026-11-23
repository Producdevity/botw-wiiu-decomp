extern "C" void fn_040296cc(void* object, int value, int index) {
    *(int*)object = value;
    *(int*)((char*)object + 4) = index;
    *(int*)((char*)object + 8) = 0x10;
}
