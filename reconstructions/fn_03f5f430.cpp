extern "C" void fn_03f5f430(void* object, void* other) {
    int value = *(int*)object;
    *(int*)object = *(int*)other;
    *(int*)other = value;
}
