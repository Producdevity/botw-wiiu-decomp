#include "botw/format_stream.h"

extern "C" void fn_030af868(FormatStream* stream) {
    if (!stream->format)
        return;
    stream->finished = false;
    while (stream->position < stream->length) {
        FormatSpec spec;
        fn_030af5b4(stream, &spec);
    }
}
