extern "C" void fn_040a9224(void* object, void* other) {
    int value = *(int*)object;
    *(int*)object = *(int*)other;
    *(int*)other = value;
}
