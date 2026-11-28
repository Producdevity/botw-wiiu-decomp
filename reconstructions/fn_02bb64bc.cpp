namespace {
struct Object {
    char padding_0[0x140];
    short value_140;
    short value_142;
};
}

extern "C" void fn_02bb64bc(void* self, unsigned char* state) {
    switch (*state) {
    case 2:
        if (((Object *)self)->value_140 == -1) {
            *state = 1;
        }
        break;
    case 3:
        if (((Object *)self)->value_142 == -1) {
            *state = 1;
        }
        break;
    }
}
