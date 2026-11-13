extern "C" void fn_03c3d25c(unsigned* state, const unsigned* input) {
    reinterpret_cast<unsigned*>(state[6])[0] = 1;
    reinterpret_cast<unsigned*>(state[6])[1] = input[1];
    reinterpret_cast<unsigned char*>(state[6])[8] = reinterpret_cast<unsigned char*>(state)[46];
    reinterpret_cast<unsigned*>(state[6])[3] = state[12];
    reinterpret_cast<unsigned*>(state[6])[4] = state[13];
    reinterpret_cast<unsigned*>(state[6])[5] = state[12];
    reinterpret_cast<unsigned*>(state[6])[6] = state[13];
    reinterpret_cast<unsigned*>(state[6])[7] = input[2];
    reinterpret_cast<unsigned*>(state[6])[8] = input[3];
    reinterpret_cast<unsigned*>(state[6])[9] = reinterpret_cast<unsigned*>(state[6])[8];
}
