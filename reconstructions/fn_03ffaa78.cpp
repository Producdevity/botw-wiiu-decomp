// Observed behavior: write a 32-bit word. Original type and symbol names are unknown.
extern "C" void fn_03ffaa78(unsigned* destination, unsigned value) {
    *destination = value;
}
