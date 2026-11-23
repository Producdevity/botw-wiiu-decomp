typedef __vec2x32float__ Pair;

extern "C" void fn_0415f048(void* object, void* other) {
    const float scalar = *(float*)other;
    const Pair splat = {scalar, scalar};
    *(Pair*)object = splat;
}
