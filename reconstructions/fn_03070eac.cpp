extern "C" void fn_03070eac(void* object, float x, float y, float z) {
    *(float*)object = x;
    *(float*)((char*)object + 8) = z;
    *(float*)((char*)object + 4) = y;
}
