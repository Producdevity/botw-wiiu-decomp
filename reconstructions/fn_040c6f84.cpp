// Observed behavior: write a 32-bit word. Original type and symbol names are unknown.
extern "C" void fn_040c6f84(unsigned* destination, unsigned value) {
    *destination = value;
}
