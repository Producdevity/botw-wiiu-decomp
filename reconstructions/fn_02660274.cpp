extern "C" void fn_02660274(void* object, int value, int index, int count, int extra) {
    *(int*)((char*)object + 12) = count;
    *(int*)((char*)object + 8) = index;
    *(int*)((char*)object + 16) = extra;
    *(int*)object = value;
}
