#ifndef BOTW_FORMAT_STREAM_H
#define BOTW_FORMAT_STREAM_H

// Streaming formatter: format string, output writer, parse cursor and
// format length; fn_030af5b4 parses the next directive into a 32-byte spec.
struct FormatStream {
    const char* format;
    void* output;
    int position;
    int length;
    bool finished;
};
typedef char FormatStreamSize[sizeof(FormatStream) == 20 ? 1 : -1];

struct FormatSpec {
    char text[32];
};

extern "C" int fn_030af5b4(FormatStream* stream, FormatSpec* spec);

#endif
