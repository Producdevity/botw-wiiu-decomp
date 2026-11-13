extern "C" void fn_0405c160(__vec2x32float__* output, const __vec2x32float__* first, const __vec2x32float__* second) {
    for (int i = 0; i < 6; ++i) output[i + 18] = second[i];
    for (int i = 0; i < 6; ++i) output[i + 12] = first[i];
    output[6] = second[6];
    output[7] = second[7];
    output[4] = first[6];
    output[5] = first[7];
}
