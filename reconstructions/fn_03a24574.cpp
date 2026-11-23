extern "C" void fn_03a24574(void* object, int value, int index, int count, int extra) {
    *(int*)((char*)object + 24) = count;
    *(int*)((char*)object + 20) = index;
    *(int*)((char*)object + 28) = extra;
    *(int*)((char*)object + 16) = value;
}
