typedef __vec2x32float__ Pair;
extern "C" Pair __PS_ADD(Pair, Pair) __attribute__((const));

extern "C" void fn_03e96334(void* object, void* other, void* third) {
    *(Pair*)object = __PS_ADD(*(Pair*)other, *(Pair*)third);
}
