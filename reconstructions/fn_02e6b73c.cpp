extern "C" void fn_02e6b73c(void* object, int value, int index) {
    *(int*)object = value;
    *(int*)((char*)object + 4) = index;
}
