typedef __vec2x32float__ Pair;
extern "C" Pair __PS_SUB(Pair, Pair) __attribute__((const));

extern "C" void fn_03e3b790(int value, void* object, void* other) {
    const Pair pair1 = *(Pair*)other;
    const Pair pair2 = *(Pair*)object;
    *(Pair*)object = __PS_SUB(pair2, pair1);
}
