extern "C" void fn_02eab368(void* object, int value) {
    *(int*)((char*)object + 104) = value << 1;
    *(int*)((char*)object + 100) = 0;
}
