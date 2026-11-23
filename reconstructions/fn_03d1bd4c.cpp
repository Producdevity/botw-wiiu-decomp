typedef __vec2x32float__ Pair;

extern "C" void fn_03d1bd4c(int value, void* object, void* other) {
    *(Pair*)object = *(Pair*)other;
    *(float*)((char*)object + 8) = *(float*)((char*)other + 8);
}
