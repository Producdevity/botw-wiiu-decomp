extern "C" void fn_033a609c(void*, float);

extern "C" void fn_033a60f0(void* object, int value, float scale) {
    *(int*)((char*)object + 28) = value;
    fn_033a609c(object, scale);
}
