typedef __vec2x32float__ Pair;
extern "C" Pair __PS_SUB(Pair, Pair) __attribute__((const));

extern "C" void fn_042899d8(void* object, void* other, void* third) {
    *(Pair*)object = __PS_SUB(*(Pair*)other, *(Pair*)third);
}
