// Observed behavior: write a 32-bit word. Original type and symbol names are unknown.
extern "C" void fn_042e2fac(unsigned* destination, unsigned value) {
    *destination = value;
}
