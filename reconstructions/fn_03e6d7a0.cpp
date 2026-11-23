typedef __vec2x32float__ Pair;
extern "C" Pair __PS_DIV(Pair, Pair) __attribute__((const));

extern "C" void fn_03e6d7a0(void* object, void* other, void* third) {
    *(Pair*)object = __PS_DIV(*(Pair*)other, *(Pair*)third);
}
