extern "C" void fn_03b68188(void* object, int value, int index, int count, int extra) {
    *(int*)((char*)object + 24) = extra;
    *(int*)((char*)object + 16) = index;
    *(int*)((char*)object + 20) = count;
}
