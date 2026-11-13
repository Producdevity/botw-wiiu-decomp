// Observed behavior: write two float components. Original type and symbol names are unknown.
extern "C" void fn_02c55834(float* values, float x, float y) {
    values[0] = x;
    values[1] = y;
}
