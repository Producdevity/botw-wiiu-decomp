extern "C" int fn_03eef32c(void* object, int value) {
    return *(int*)(*(char**)object + (value << 3));
}
