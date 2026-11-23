extern "C" void fn_040f7ba8(void* object, int value, int index, int count) {
    *(int*)((char*)object + 4) = index;
    *(int*)((char*)object + 8) = count;
    *(int*)object = value;
}
