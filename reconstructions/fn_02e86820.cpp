extern "C" bool fn_02e86820(const unsigned* value) {
    for (unsigned mode = 2; mode < 5; ++mode)
        if (*value == mode) return true;
    return false;
}
