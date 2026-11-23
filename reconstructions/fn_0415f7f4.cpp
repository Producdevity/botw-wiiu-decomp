typedef __vec2x32float__ Pair;
extern "C" Pair __PS_DIV(Pair, Pair) __attribute__((const));

extern "C" void fn_0415f7f4(void* object, void* other) {
    const Pair pair1 = *(Pair*)other;
    const Pair pair2 = *(Pair*)object;
    *(Pair*)object = __PS_DIV(pair2, pair1);
}
