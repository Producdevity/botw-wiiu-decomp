extern "C" void fn_03c2619c(void* object, int value, int index) {
    *(unsigned char*)((char*)object + 342) = value;
    if (value) {
        *(unsigned char*)((char*)object + 356) = index;
    }
}
