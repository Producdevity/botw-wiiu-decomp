extern "C" unsigned fn_03f8e564(unsigned count) {
    unsigned bound = count * 2;
    unsigned capacity = 8;
    while (static_cast<int>(capacity) < static_cast<int>(bound)) capacity *= 2;
    return capacity * 16;
}
