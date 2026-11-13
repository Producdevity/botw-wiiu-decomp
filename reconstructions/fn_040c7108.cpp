// Observed behavior: write a 32-bit word. Original type and symbol names are unknown.
extern "C" void fn_040c7108(unsigned* destination, unsigned value) {
    *destination = value;
}
