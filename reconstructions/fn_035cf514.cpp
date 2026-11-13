// Observed behavior: write two float components. Original type and symbol names are unknown.
extern "C" void fn_035cf514(float* values, float x, float y) {
    values[0] = x;
    values[1] = y;
}
