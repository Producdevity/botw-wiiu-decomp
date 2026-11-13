// Observed behavior: write one float to two adjacent elements. Original type and symbol names are unknown.
extern "C" void fn_02d8d084(float* values, float value) {
    values[0] = value;
    values[1] = value;
}
