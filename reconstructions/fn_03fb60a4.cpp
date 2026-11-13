// Observed behavior: signed 32-bit maximum. Original types and names are unknown.
extern "C" int fn_03fb60a4(int left, int right) {
    return left < right ? right : left;
}
