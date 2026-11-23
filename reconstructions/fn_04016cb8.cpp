typedef __vec2x32float__ Pair;
extern "C" Pair __PS_MUL(Pair, Pair) __attribute__((const));

extern "C" void fn_04016cb8(void* object, void* other, void* third) {
    *(Pair*)object = __PS_MUL(*(Pair*)other, *(Pair*)third);
}
