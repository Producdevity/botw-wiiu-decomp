extern "C" bool fn_03c47f88(const unsigned char* left, const unsigned char* right) {
    for (unsigned int index = 0; index < 32; ++index) {
        if (left[index] != right[index])
            return false;
        if (left[index] == 0)
            break;
    }
    return true;
}
