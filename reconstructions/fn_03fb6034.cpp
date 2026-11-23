typedef __vec2x32float__ Pair;
extern "C" Pair __PS_ADD(Pair, Pair) __attribute__((const));

extern "C" void fn_03fb6034(void* object, void* other, void* third) {
    const Pair pair1 = *(Pair*)third;
    const Pair pair2 = *(Pair*)other;
    *(Pair*)object = __PS_ADD(pair2, pair1);
}
