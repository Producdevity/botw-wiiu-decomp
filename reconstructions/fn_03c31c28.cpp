extern "C" void fn_03c31c28(void* object, int value, int index) {
    *(int*)((char*)object + 256) = value;
    *(int*)((char*)object + 260) = value + index;
}
