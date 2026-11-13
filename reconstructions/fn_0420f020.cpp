// Observed behavior: count bytes before a zero terminator using pointer difference. Original types and names are unknown.
extern "C" unsigned fn_0420f020(const char* text) {
    const char* end = text;
    while (*end)
        ++end;
    return end - text;
}
