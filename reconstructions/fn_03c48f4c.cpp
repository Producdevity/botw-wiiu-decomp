extern "C" bool fn_03c48f4c(const unsigned char* left, const unsigned char* right) {
    for (unsigned int index = 0; index < 8; ++index) {
        if (left[index] != right[index])
            return false;
        if (left[index] == 0)
            break;
    }
    return true;
}
