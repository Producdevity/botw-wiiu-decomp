extern "C" unsigned char fn_03198594(char *self) {
    char *owner = *(char **)(self + 400);
    unsigned char *field;
    unsigned char result;
    if (owner) {
        field = (unsigned char *)(owner + 10);
        return *field;
    }
    result = 0;
    if (*(unsigned char *)(self + 136) == 2) {
        result = *(unsigned char *)(self + 330);
    }
    return result;
}
