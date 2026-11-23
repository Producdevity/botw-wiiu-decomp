extern "C" void fn_04029708(void* object, int value) {
    *(int*)((char*)object + 4) = (*(int*)((char*)object + 4)) - value;
}
