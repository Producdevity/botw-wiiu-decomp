// Observed behavior: load a float and return its absolute value. Original type and symbol names are unknown.
extern "C" float fn_02e55444(const float* value) {
    return __builtin_fabsf(*value);
}
