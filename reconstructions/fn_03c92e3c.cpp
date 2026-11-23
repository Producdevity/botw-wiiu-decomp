struct SeekableRange {
    unsigned char header[8];
    long long position;
    long long start;
    long long size;
};

extern "C" long long fn_03c92e3c(void* object, int offset, unsigned origin) {
    long long position = 0;
    switch (origin) {
    case 1:
        position = offset;
        break;
    case 2:
        position = static_cast<SeekableRange*>(object)->position + offset;
        break;
    case 3:
        position = static_cast<SeekableRange*>(object)->size + static_cast<SeekableRange*>(object)->start - offset;
        if (position < 0)
            position = 0;
        break;
    }
    if (position > static_cast<SeekableRange*>(object)->size + static_cast<SeekableRange*>(object)->start)
        return -1;
    static_cast<SeekableRange*>(object)->position = position;
    return position;
}
