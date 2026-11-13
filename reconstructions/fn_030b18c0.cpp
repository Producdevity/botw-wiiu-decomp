// Observed behavior: count bytes before a zero terminator. Original types and names are unknown.
extern "C" unsigned fn_030b18c0(const unsigned char* text) {
    unsigned length = 0;
    while (text[length])
        ++length;
    return length;
}
