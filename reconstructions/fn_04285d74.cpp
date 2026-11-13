// Observed behavior: select float by ordered less-than comparison. Original types and names are unknown.
extern "C" float fn_04285d74(float left, float right) {
    return left < right ? left : right;
}
