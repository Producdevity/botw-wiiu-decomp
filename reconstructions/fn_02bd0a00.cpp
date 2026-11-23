extern "C" void fn_02bd0a00(void* object) {
    float value = *(float*)((char*)object + 100);
    *(float*)((char*)object + 120) = *(float*)((char*)object + 96);
    *(float*)((char*)object + 124) = value;
}
