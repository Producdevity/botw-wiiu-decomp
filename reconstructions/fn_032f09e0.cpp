// Observed behavior: write three float components in observed order. Original type and symbol names are unknown.
extern "C" void fn_032f09e0(float* values, float x, float y, float z) {
    values[1] = y;
    values[2] = z;
    values[0] = x;
}
