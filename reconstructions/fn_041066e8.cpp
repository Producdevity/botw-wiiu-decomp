typedef __vec2x32float__ Pair;

extern "C" void fn_041066e8(void* object, void* other) {
    const float scalar = *(float*)other;
    const Pair splat = {scalar, scalar};
    *(Pair*)object = splat;
}
