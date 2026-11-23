extern "C" void fn_03c10000(void* object, int value, int index, int count) {
    *(int*)((char*)object + 12) = index;
    *(int*)((char*)object + 192) = count;
    *(int*)((char*)object + 8) = value;
}
