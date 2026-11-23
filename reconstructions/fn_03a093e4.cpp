extern "C" void fn_03a093e4(void* object, int value) {
    if (((unsigned)(*(unsigned*)((char*)object + 20))) != value) {
        *(int*)((char*)object + 20) = value;
    }
}
