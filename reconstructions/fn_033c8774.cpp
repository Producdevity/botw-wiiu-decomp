extern "C" int fn_033c8774(void *self) {
    int result;
    if ((unsigned int)*(signed char *)((char *)self + 1) >= 10 ||
        (unsigned int)*(signed char *)((char *)self + 2) >= 8 ||
        (!(*(unsigned char *)self & 1) && (unsigned int)*(signed char *)((char *)self + 3) >= 16)) {
        result = 0;
        return result;
    }
    return 1;
}
