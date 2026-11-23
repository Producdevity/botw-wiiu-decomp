extern "C" void fn_0329cb7c(void* object, void* other) {
    int value = *(int*)object;
    *(int*)object = *(int*)other;
    *(int*)other = value;
}
