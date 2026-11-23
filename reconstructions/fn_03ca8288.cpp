struct SeekableRange {
    unsigned char header[8];
    long long position;
    long long start;
    long long size;
};

extern "C" long long fn_03ca8288(SeekableRange* range, int offset, unsigned origin) {
    long long position = 0;
    switch (origin) {
    case 1:
        position = offset;
        break;
    case 2:
        position = range->position + offset;
        break;
    case 3:
        position = range->size + range->start - offset;
        if (position < 0)
            position = 0;
        break;
    }
    if (position > range->size + range->start)
        return -1;
    range->position = position;
    return position;
}
