extern "C" void fn_04114b1c(void* object, void* other) {
    float value = *(float*)object;
    *(float*)object = *(float*)other;
    *(float*)other = value;
}
