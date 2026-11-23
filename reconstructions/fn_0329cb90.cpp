extern "C" void fn_0329cb90(void* object, void* other) {
    int value = *(int*)object;
    *(int*)object = *(int*)other;
    *(int*)other = value;
}
