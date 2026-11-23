extern "C" void fn_03bf66b8(void*);

extern "C" void fn_03aed030(void* object, int value) {
    *(int*)((char*)object + 84) = value;
    fn_03bf66b8((char*)object + 68);
}
