extern "C" void fn_0345abf8(__vec2x32float__* output, const __vec2x32float__* first, const __vec2x32float__* second) {
    for (int i = 0; i < 8; ++i) output[i + 4] = first[i];
    for (int i = 0; i < 8; ++i) output[i + 12] = second[i];
}
