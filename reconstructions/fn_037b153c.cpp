extern "C" void fn_037b153c(void* object, void* other, int value) {
    int second = *(int*)other;
    *(int*)((char*)object + 1156) = value;
    *(int*)((char*)object + 1152) = second;
}
