extern "C" void fn_02bb64bc(void* self, unsigned char* state) {
    switch (*state) {
    case 2:
        if (*(short*)((char*)self + 0x140) == -1) {
            *state = 1;
        }
        break;
    case 3:
        if (*(short*)((char*)self + 0x142) == -1) {
            *state = 1;
        }
        break;
    }
}
