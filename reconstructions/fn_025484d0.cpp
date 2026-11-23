extern "C" void fn_025484d0(void* object, float x, float y, float z) {
    *(float*)((char*)object + 100) = x * z;
    *(float*)((char*)object + 104) = y * z;
}
