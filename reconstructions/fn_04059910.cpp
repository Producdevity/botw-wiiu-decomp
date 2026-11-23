typedef __vec2x32float__ Pair;

extern "C" void fn_04059910(void* object, void* other) {
    const float scalar = *(float*)other;
    const Pair splat = {scalar, scalar};
    *(Pair*)object = splat;
}
