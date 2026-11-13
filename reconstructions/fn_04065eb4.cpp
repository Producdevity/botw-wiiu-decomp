extern "C" void fn_04065eb4(const __vec2x32float__* first, const __vec2x32float__* second, unsigned char** cursor) {
    unsigned char* bytes = *cursor;
    __vec2x32float__* output = reinterpret_cast<__vec2x32float__*>(bytes);
    for (int i = 0; i < 6; ++i) output[i] = first[i];
    for (int i = 0; i < 6; ++i) output[i + 6] = second[i];
    bytes[3] = 31;
    *cursor = bytes + 96;
}
