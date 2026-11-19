extern "C" bool fn_02f3ad7c(const unsigned char* left, const unsigned char* right) {
    for (unsigned int index = 0; index < 128; ++index) {
        if (left[index] != right[index])
            return false;
        if (left[index] == 0)
            break;
    }
    return true;
}
