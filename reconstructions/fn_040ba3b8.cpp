extern "C" void fn_040ba3b8(void* object, void* other) {
    unsigned short value = *(unsigned short*)object;
    *(unsigned short*)object = *(unsigned short*)other;
    *(unsigned short*)other = value;
}
