// Observed behavior: clear three adjacent 32-bit words. Original types and names are unknown.
extern "C" void fn_03a4d6c8(unsigned* values) {
    values[0] = 0;
    values[1] = 0;
    values[2] = 0;
}
