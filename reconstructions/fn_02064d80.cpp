// Observed behavior: copy three floats into a strided column. Original types and names are unknown.
extern "C" void fn_02064d80(float* matrix, const float* vector) {
    matrix[3] = vector[0];
    matrix[7] = vector[1];
    matrix[11] = vector[2];
}
