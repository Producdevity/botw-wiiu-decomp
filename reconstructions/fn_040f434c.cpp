typedef __vec2x32float__ Pair;
extern "C" Pair __PS_SUB(Pair, Pair) __attribute__((const));

extern "C" void fn_040f434c(void* object, void* other, void* third) {
    const Pair pair1 = *(Pair*)third;
    const Pair pair2 = *(Pair*)other;
    *(Pair*)object = __PS_SUB(pair2, pair1);
}
