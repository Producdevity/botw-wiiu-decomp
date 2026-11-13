// Observed behavior: count bytes before a zero terminator using pointer difference. Original types and names are unknown.
extern "C" unsigned fn_03f9a194(const char* text) {
    const char* end = text;
    while (*end)
        ++end;
    return end - text;
}
