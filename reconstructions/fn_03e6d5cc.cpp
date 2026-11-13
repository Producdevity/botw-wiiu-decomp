extern "C" void fn_03e6d5cc(__vec2x32float__* first, __vec2x32float__* second) {
    __vec2x32float__ saved = first[0];
    first[0] = second[0];
    second[0] = saved;
}
