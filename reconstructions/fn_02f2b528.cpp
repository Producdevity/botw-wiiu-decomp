// Observed behavior: write a 32-bit word. Original type and symbol names are unknown.
extern "C" void fn_02f2b528(unsigned* destination, unsigned value) {
    *destination = value;
}
