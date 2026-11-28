extern "C" bool fn_03c47090(const unsigned char* left, const unsigned char* right) {
    for (unsigned int index = 0; index < 28; ++index) {
        if (left[index] != right[index])
            return false;
        if (left[index] == 0)
            break;
    }
    return true;
}
