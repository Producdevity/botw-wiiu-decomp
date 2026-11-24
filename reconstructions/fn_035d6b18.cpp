struct Format_035d6b18 {
    unsigned char padding_0[576];
    int kind;
    unsigned int format;
};

extern "C" int fn_035d6b18(const Format_035d6b18* format) {
    if (format == 0) {
        return 0;
    }
    if (format->kind == 1) {
        return 1;
    }
    int result = 0;
    switch (format->format) {
    case 0x1800011:
    case 0x1800012:
        result = 2;
        break;
    case 0x1800006:
        result = 3;
        break;
    }
    return result;
}
