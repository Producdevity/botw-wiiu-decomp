extern "C" void fn_040f6aa8(__vec2x32float__* output, float x, float y, float z, float w) {
    const __vec2x32float__ first = {x, y};
    const __vec2x32float__ second = {z, w};
    output[0] = first;
    output[1] = second;
}
