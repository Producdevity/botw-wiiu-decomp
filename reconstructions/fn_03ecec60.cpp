extern "C" void fn_03ecec60(void* object, int value) {
    *(int*)((char*)object + 4) = (*(int*)((char*)object + 4)) - value;
}
