extern "C" void fn_0255ef3c(float* output, const float* translation, const float* matrix) {
    output[0] = matrix[0];
    output[1] = matrix[1];
    output[2] = matrix[2];
    output[3] = matrix[3] + translation[0];
    output[4] = matrix[4];
    output[5] = matrix[5];
    output[6] = matrix[6];
    output[7] = matrix[7] + translation[1];
    output[8] = matrix[8];
    output[9] = matrix[9];
    output[10] = matrix[10];
    output[11] = matrix[11] + translation[2];
}
