// Observed behavior: write one float to two adjacent elements. Original type and symbol names are unknown.
extern "C" void fn_028f5a94(float* values, float value) {
    values[0] = value;
    values[1] = value;
}
