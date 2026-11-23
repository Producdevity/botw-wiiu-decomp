extern "C" int fn_0399e11c(void* object, int value, int index) {
    *(int*)object = value;
    *(unsigned short*)((char*)object + 8) = index;
    *(unsigned short*)((char*)object + 10) = index;
    return 1;
}
