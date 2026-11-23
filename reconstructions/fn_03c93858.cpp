extern "C" void fn_03c93858(void* object, int value, int index, int count, int extra) {
    *(int*)((char*)object + 100) = count;
    *(int*)((char*)object + 88) = extra;
    *(int*)((char*)object + 96) = index;
}
