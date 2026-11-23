extern "C" void fn_03a4dce4(void* object, int value, int index, int count) {
    *(int*)((char*)object + 4) = index;
    *(int*)((char*)object + 8) = count;
    *(int*)object = value;
}
